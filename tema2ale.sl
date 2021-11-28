var
	mensaje:cadena
	codigo:cadena
	cont_esp,cont_letra,posi,i,j:numerico 
inicio
	cls()
	imprimir("ingrese cadena a ser codificada: ")
	leer(mensaje)//mensaje a codificar
	imprimir("ingrese codigo: ")
	leer(codigo)//codigo para la codificacion
	imprimir(codificacion(mensaje,codigo))
fin

sub codificacion(mensaje:cadena; codigo:cadena) retorna cadena
	var
		abc,mensajecod:cadena
		vecp:vector[*]cadena
	inicio
		abc="abcdefghijklmnopqrstuvwxyz" //cadena abecedario, para poder tener el siguiente elemento
		/*comprobacion que no tenga mas de 9 palabras*/
		desde i=1 hasta strlen(mensaje){
			si (mensaje[i]==" ") {
				inc(cont_esp)
			}
			si (cont_esp+1>9){
				imprimir("No se puede codificar, debido a que existe más de 9 palabras")
				salir
			}
		}
		dim(vecp,cont_esp+1)
		mensaje=mensaje+" "
		/*comprobacion que no tenga mas de 30 caracteres una palabra*/
		desde i=1 hasta strlen(mensaje){
			mientras (mensaje[i]<>" "){
				inc(cont_letra)
				inc(i)
			}
			si(cont_letra>30){
				imprimir("No se puede codificar una palabra supera los 30 caracteres")
				salir
			}
			cont_letra=0
		}
		/*reemplazamos el valor del caracter por el siguiente segun abecedario*/
		//aca se podria usar "pos" pero para usar menos funciones
		//propias del lenguaje usamos dos ciclos for anidados
		desde i=1 hasta strlen(mensaje){
			desde j=1 hasta strlen(abc){
				si(abc[j]==mensaje[i]){
					mensaje[i]=abc[j+1]
					salir
				}
				si(mensaje[i]=="z"){
					mensaje[i]="a"
					salir
				}
			}
		}
		/*creamos un vector de cadenas para poder manipular la posicion de cada caracter*/
		j=1
		desde i=1 hasta strlen(mensaje){
			si(mensaje[i]<>" "){
				vecp[j]=vecp[j]+mensaje[i]
			sino
				inc(j)
			}
		}
		/*cargamos el mensaje codificado segun codigo de codificacion*/
		desde i=1 hasta strlen(codigo){
			mensajecod=mensajecod+vecp[val(codigo[i])]+codigo[i]
		}
		
		retorna mensajecod //retornamos el mensaje codificado
fin
