 var
frase:cadena
rep,temporal:cadena
pal:cadena
longitud,i,j,inicial,acertado,temp,oportunidades,repetido,gano,cont:numerico


inicio
cls()


imprimir("\t Juego del Ahorcado\n")
imprimir("Introduzca la palabra a adivinar: ")
leer(frase)
acertado=0
temp=0
oportunidades=5//tiene 5 oportunidades en el juegho
repetido=0
gano=0
longitud=0
inicial=0
j=1
rep[1]=' '
rep=frase
temporal=frase
desde i=1 hasta strlen(frase){
	rep[i]=' '
	temporal[i]='-'
}
repetir
   temp=0
	si(inicial==0){
		desde i=1 hasta strlen(frase){
			si(frase[i]==' '){
				temporal[i]=' '
				 longitud=longitud+1
			sino
				temporal[i]='-'
				longitud=longitud+1

			}
		}
	}
	inicial=1
	//temporal[longitud]='\0'
	desde i=1 hasta 100 //verifica si hay caracteres repetidos
	{
		si(rep[i]==pal){
			repetido=1
			salir
		sino
			repetido=0
		}
	}

	si(repetido==0){
		desde i=1 hasta strlen(frase)
		{
			si(frase[i]==pal)//si el caracter esta e la palabra entopnces guarda en tempòral e imprime el proceso que hay en temporal despues
			{
				temporal[i]=pal
				acertado=acertado+1
				temp=1
			}
		}
	}
	
	si(repetido==0){
		si(temp==0){
			oportunidades=oportunidades-1
		}
	}
	
	imprimir("\n")
	desde i=1 hasta 100{
		imprimir(temporal[i])
	}

	imprimir("\n")
	
	
	si(frase==temporal){
		gano=1
		
	}
	imprimir("\nLetras acertadas: ",acertado)
	imprimir("\n")
	imprimir("Oportunidades Restantes: ", oportunidades)
	imprimir("\n")
	
	rep[j]=pal//guarda las letras que se acertaron
	j=j+1
	si(oportunidades==0){salir}
	si(gano==0){
	imprimir("Ingrese una letra: ")
	leer(pal)}
hasta (oportunidades==0 or gano==1)
si(gano==1){
	imprimir("\n\nHas ganado viejo")
sino
	imprimir("Eres un perdedor\n\n")
}
	fin
