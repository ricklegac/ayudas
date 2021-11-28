/*Algoritmo
Segundo Parcial 20/05/2021
Sánchez Gámez Matías
5333453
Tema1*/


tipos
vec:vector[365]registro{
fecha:numerico
cod:numerico
tipo:numerico
cot:numerico
}

var
cont:numerico
linea:cadena
i:numerico
anterior:numerico
vect:vec
c:numerico


inicio
cls()
si(not set_stdin("cotprueba.txt")){

	imprimir("No sepudo abrir archivo")
}

set_ifs("	")//separador de campos
i=1
//anterior=9999999999
mientras(not eof()){
	inc(cont)

	
	leer(vect[i].fecha,vect[i].cod,vect[i].tipo,vect[i].cot)//guardo los datos en un vector para utilizar en la moneda libra despues
	si(vect[i].cot==0){
		terminar("Codigo 0")
	}	 	  	 	   	  	    	     	 	  	 	
	si(vect[i].tipo==2 and vect[i].cod==2){//verifica que sea dolar y que sea venta
		si(vect[i].cot <> anterior ){//verifica que sea distinto a lacotizacion anterior
			c=c+1
			anterior=vect[i].cot//guarda el anterior para comparar despues
		}
	}
	
	i=i+1
}

imprimir("Vario el dolar ",c," veces\n")//imprime el resultado del dolar

imprimir("\n")
//cotizacion_dolar(vect,cont)
cotizacion_libra(vect,cont)// llama a la funcion para calcular cual es el mayor 

fin



subrutina cotizacion_libra(vect:vec;n:numerico)

var
v:vector[5]registro{
cot:numerico
dia:numerico
}
i,j:numerico
indice:numerico
inicio

//guarda en un vector de 5 elementos los 5 mayores , una vez que encuetra el primer mayor guarda sus datos y 
//remplaza ese lugar con 0 para que luego no vuelva a comparar 
desde i=1 hasta 5{
	desde j=1 hasta n{
		si(vect[j].cod==1 and vect[j].tipo==2){	 	  	 	   	  	    	     	 	  	 	
			si(v[i].cot<vect[j].cot){
				v[i].cot=vect[j].cot
				v[i].dia=vect[j].fecha
				indice=j
			}
		}
	}
	vect[indice].cot=0//el mayor anterior inicializa en 0 para que no vuelva a comprar en el siguiente
}


imprimir("Las 5 cotizaciones mas altas de libra en el anio son \n")
desde i=1 hasta 5{
imprimir(v[i].dia,"  ", v[i].cot)
imprimir("\n")
}
fin




/*subrutina cotizacion_dolar(vect:vec;n:numerico)
var
i,j,cont:numerico

inicio
desde i=1 hasta n-1 {
	si(vect[i].tipo==2 and vect[i].cod==2){
		desde j=i+1 hasta n{
			si(vect[j].tipo==2 and vect[j].cod==2){
				si(vect[i].cot>vect[j].cot or vect[i].cot<vect[j].cot ){
					
					cont=cont+1
					j=n+1
				} 
			}	 	  	 	   	  	    	     	 	  	 	
		}
	}
}


imprimir("\n")
imprimir("El dolar vario ",cont," veces en el anio\n\n")
fin

*/





