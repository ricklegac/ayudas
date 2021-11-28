tipos
lecturas:registro{
			nro_medidor:numerico
			lect_anterior:cadena
			lect_actual:cadena
			}
var
consumo:lecturas
usado,impuesto,utilizado:numerico
inicio
cls()
	set_stdin("medidores.txt")	
	set_stdout ("facturas.txt")
	si( not set_stdin("lecturas.txt") ){
		imprimir("NO SE PUDO ABRIR EL ARCHIVO")
	sino
		imprimir("Monto a facturar por cada medidor\n")
		mientras(not eof()){
			set_ifs(",")
			leer(consumo.nro_medidor)
			leer(consumo.lect_anterior)
			leer(consumo.lect_actual)
			si(not eof()){
				si(val(consumo.lect_actual) <= 20){
					imprimir("Medidor Nro: ",consumo.nro_medidor," Consumo menor a 20 m3\n")
					utilizado=utilizado+val(consumo.lect_actual) //HALLAMOS EL TOTAL CONSUMUDO EN m3
				sino 
					usado=(val(consumo.lect_actual)-20)*7000+45000 //HALLAMOS EL COSTO POR EL CONSUMO 
					utilizado=utilizado+val(consumo.lect_actual)
					si(usado < 50000){
						impuesto=impuesto+(usado*0.04) // CONTADOR PARA EL TOTAL DE IMPUESTO COBRADO
						usado=usado+(usado*0.04)
						imprimir("Medidor Nro: ",consumo.nro_medidor," monto a facturar: ",usado,"\n")
					
					sino si(usado >= 50000 and usado<= 120000)
						impuesto=impuesto+(usado*0.03)
						usado=usado+(usado*0.03)
						imprimir("Medidor Nro: ",consumo.nro_medidor," monto a facturar: ",usado,"\n")
					
					sino
						impuesto=impuesto+(usado*0.025)
						usado=usado+(usado*0.025)
						imprimir("Medidor Nro: ",consumo.nro_medidor," monto a facturar: ",usado,"\n")
						
					}
					
				}
			}
		}
	}
	set_stdout("")
				imprimir("Total de impuesto cobrado: ",impuesto,"\n")
				imprimir("Total de agua consumida: ",utilizado,"\n")
fin