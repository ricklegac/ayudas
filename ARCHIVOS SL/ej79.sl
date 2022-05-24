
var
	datos:registro{
		mes:numerico
		dia:numerico
		cod:cadena
		peso:numerico
	}
	
	mensual:vector[12]registro{
		cantidad:vector[6]numerico
		monto:vector[6]numerico
		monto_total:numerico
	}

	anual:registro{
		promedio:numerico//promedio de recaudacion mensual
		prom_por_tipo:vector[6]numerico//promedio de recaudacion por vehiculo
		total:vector[6]numerico//total de vehiculos que pasaron		
	}
	
	tipo_vehiculo:vector[*]cadena
	tipo,i,j,cant:numerico
	
inicio
	cls()
	//Declaramos los tipos de vehiculos
	tipo_vehiculo = {"COC","CTA","MIN","OMN","CMN","CMA"}
	//LECTURA DEL ARCHIVO
	set_stdin("entrada79.txt")
	mientras(not eof()){
		leer( datos )
		//ELABORACION DEL INFORME MENSUAL
		tipo = calcular_tipo( datos.cod )//retornar un numero entre 1 y 6 que sera el indice
		mensual[ datos.mes ].cantidad[ tipo ] = mensual[ datos.mes ].cantidad[ tipo ] + 1
		//Calculamos el costo del peaje segun el tipo de vehiculo y sumamos un recargo por peso de ser necesario
		mensual[ datos.mes ].monto[ tipo ] = mensual[ datos.mes ].monto[ tipo ] + costo( tipo , datos.peso)
		mensual[datos.mes].monto_total = mensual[ datos.mes ].monto_total + costo( tipo , datos.peso)
	}

	//ELABORACION DEL INFORME ANUAL
	desde i=1 hasta 12{
		anual.promedio = anual.promedio + mensual[i].monto_total/12
		desde j=1 hasta 6{//SUMAMOS LOS DATOS
			anual.total[j] = anual.total[j] + mensual[i].cantidad[j] 
			anual.prom_por_tipo[j] = anual.prom_por_tipo[j] + mensual[i].monto[j]
		}
	}
	//CALCULO DEL PROMEDIO
	desde i=1 hasta 6{
		cant = 0
		desde j=1 hasta 12{//SUMATORIA PARA EL PROMEDIO 
			cant = cant + mensual[j].cantidad[i] 
		}//DIVISION PARA EL PROMEDIO
		anual.prom_por_tipo[i] = anual.prom_por_tipo[i]/cant
	}
	


	//EXPORTAMOS EL INFORME	MENSUAL
	set_stdout("salida79.txt")
	desde i=1 hasta 12{
		imprimir("\n Mes: ",i)
		desde j=1 hasta 6{
			si(mensual[i].cantidad[j] > 0){
				imprimir("\n\tTipo: ",tipo_vehiculo[j],
							"\tCant. Vehiculos: ",mensual[i].cantidad[j],
							"\tMonto: ",mensual[i].monto[j])
			}
		}
		imprimir("\n Total de peaje: ",mensual[i].monto_total)
	}	
	
	//EXPORTAMOS EL INFORME	ANUAL
	imprimir("\n\n\n Promedio de recaudacion mensual: ",anual.promedio)
	imprimir("\n Promedio de recaudacion por tipo de vehiculo: ")
	desde i=1 hasta 6{
		imprimir("\n\tTipo: ",tipo_vehiculo[i],
					"\tMonto: ",anual.prom_por_tipo[i],
					"\tCantidad Vehiculos: ",anual.total[i])
	}
	
	

fin

	sub calcular_tipo(cod:cadena)retorna numerico
	var
		tipo_vehiculo:vector[*]cadena
		pos,i:numerico
	inicio
		tipo_vehiculo = {"COC","CTA","MIN","OMN","CMN","CMA"}
		desde i=1 hasta 6{
			si(cod == tipo_vehiculo[i]){
				pos = i
			}
		}
		retorna pos
	fin

	
	sub costo( tipo:numerico;peso:numerico)retorna numerico
	var
		costos:vector[6]numerico
		peaje:numerico
	inicio
		costos = {6000,8000,12000,20000,15000,18000}
		peaje = costos[ tipo ]
		si(tipo==5 or tipo==6){
			peaje = peaje + int(peso/50)*1200//calculamos el recargo
			si(peso%50 <> 0){//verificamos si se tiene que sumar 50
				peaje = peaje + 1200
			}
		}
		
		retorna peaje
	fin
