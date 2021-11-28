tipos
saldos: registro{
				nro_cliente:numerico
				nombre:cadena
				apellido:cadena
				direccion:cadena
				telefono:cadena
				saldo:numerico
			}
ventas: registro{
				nroMovimiento: numerico
				fecha:cadena
				tipovta:numerico
				nro_cliente:numerico
				monto_total:numerico
			}
var
cliente:saldos
mov:ventas
climayor,mayvol,climayvol:numerico
clienteactual:numerico
ban,volumen:numerico
sal:numerico
mayor:numerico
inicio
cls()
	/*set_stdin("cliente.txt")
	set_stdin("movimientos.txt")
	si( not set_stdin("movimientos.txt")){
		imprimir("NO SE PUDO ABRIR EL ARCHIVO")
	sino
		mientras(not eof()){
			set_ifs(",")
			leer(cliente.nro_cliente)
			leer(cliente.nombre)
			leer(cliente.apellido)
			leer(cliente.direccion)
			leer(cliente.telefono)

			imprimir(cliente.nro_cliente)
			imprimir(cliente.nombre)
			imprimir(cliente.apellido)
			imprimir(cliente.direccion)
			imprimir(cliente.telefono)
			imprimir("Ingrese saldo: ")
			leer(cliente.saldo)
			imprimir("\n")
		}
	}*/
	
	set_stdin("movimientos.txt")
	si( not set_stdin("movimientos.txt")){
		imprimir("NO SE PUDO ABRIR EL ARCHIVO")
	sino
		mientras(not eof()){
				set_ifs(",")
				leer(mov.nroMovimiento)
				leer(mov.fecha)
				leer(mov.tipovta)
				leer(mov.nro_cliente)
				leer(mov.monto_total)
				si(ban==0){
					clienteactual=mov.nro_cliente
					ban=1
				}
				
				si(mov.nro_cliente==clienteactual){
					inc(volumen)
					si(mov.tipovta==3){
						sal=sal-mov.monto_total
					sino si(mov.tipovta==2)
						sal=sal+mov.monto_total
					}
				sino
					clienteactual=mov.nro_cliente
					si(sal>=mayor){
						climayor=mov.nro_cliente
						mayor=sal
					}
					si(volumen>=mayvol){
						climayvol=mov.nro_cliente
						mayvol=volumen
					}
					sal=0
					volumen=0
				}
			
				
			
				
		}
		imprimir("cliente con mayor saldo",climayor,"\n")
		imprimir("cliente con mayor volumen de ventas", climayvol,"\n")
	}

fin