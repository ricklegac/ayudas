programa primer_parcial_Jessica_Cantero
const
N1=1 //minimo ascii
N2=255 //maximo ascii extendido
var
texto: cadena //variable de input para codificar
i,	N:numerico //variables necesarias, i un incrementador y N el valor random
inicio
cls() //clear screen
imprimir("ingrese un texto: \n")//impresion normal por consola
leer(texto)//lectura de la variable texto tipo cadena
N=random(5) //random de 5 para no complicarse y poder hacer prueba de escritorio
desde i = 1 hasta strlen(texto){
	si (ord(texto[i])+N > N2){ //ord retorna numerico, posicion ascii del caracter en posicion i
		texto[i]=ascii(N1 + N2 + N - N2)
	sino
		texto[i]=ascii(ord(texto[i])+N) //si no pasa del valor MAX N2 carga el ascii + N
	}
}

//impresiones por consola:
imprimir("\nascii obtenido: con random igual a ",N,"\n: ")
imprimir(texto) 
fin

