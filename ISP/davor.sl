
var
loteria,i:numerico
lotcad,numero,j:cadena
inicio
cls()
loteria=100+random(900)
//lotcad=str(loteria)
lotcad="121"
imprimir("Ingrese un numero de 3 digitos")
leer(numero)
desde i=1 hasta 3{
	desde j=i+1 hasta 3{
		si(lotcad[i]==numero[j]) {inc(cont)}
	}

}
imprimir(cont++)


fin