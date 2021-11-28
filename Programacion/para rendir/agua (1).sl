tipos
lecturas:registro{
			nro_medidor:numerico
			lect_anterior:cadena
			lect_actual:cadena
			}
var
consumo:lecturas
usado,comision,impuesto,utilizado:numerico
inicio
cls()
	set_stdin("medidores.txt")	
	si( not set_stdin("medidores.txt") ){
		imprimir("NO SE PUDO ABRIR EL ARCHIVO")
	sino
		mientras(not eof()){
			set_ifs(",")
			leer(consumo.nro_medidor)
			leer(consumo.lect_anterior)
			leer(consumo.lect_actual)
			si(not eof()){
				si(consumo.lect_anterior >= consumo.lect_actual){
					imprimir("Medidor Nro: ",consumo.nro_medidor," tiene la lectura anterior es igual o mayor a la lectura actual\n")
					utilizado=utilizado+val(consumo.lect_actual)
				sino 
					usado=(val(consumo.lect_actual)-20)*7000+45000
					utilizado=utilizado+val(consumo.lect_actual)
					si(usado < 50000){
						impuesto=impuesto+(usado*0.04)
						usado=usado+(usado*0.04)
						imprimir("Medidor Nro: ",consumo.nro_medidor," monto a facturar: ",usado,"\n")
						comision=comision+usado
					sino si(usado >= 50000 and usado<= 120000)
						impuesto=impuesto+(usado*0.03)
						usado=usado+(usado*0.03)
						imprimir("Medidor Nro: ",consumo.nro_medidor," monto a facturar: ",usado,"\n")
						comision=comision+usado
					sino
						impuesto=impuesto+(usado*0.025)
						usado=usado+(usado*0.025)
						imprimir("Medidor Nro: ",consumo.nro_medidor," monto a facturar: ",usado,"\n")
						comision=comision+usado
					}
					
				}
			}
		}
	}
				imprimir("AGUAS S.A debe percibir: ",comision,"\n")
				imprimir("Total de impuesto cobrado: ",impuesto,"\n")
				imprimir("Total de agua consumida: ",utilizado,"\n")
fin