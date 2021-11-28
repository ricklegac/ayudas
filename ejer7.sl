var
w,t,v:numerico
inicio
cls()
imprimir("ingrese la temperatura y la velocidad del viento\n")
leer(t,v)
mientras(t>50 or t<-50){
	imprimir("t mayor al valor absoluto 50, ingrese un valor en el rango\n")
	leer(t)
}
mientras(v<3 or t>120){
	imprimir("ingrese una velocidad valida\n")
	leer(v)
}
w=(35.74+0.6215*t)+(0.425*t-35.75)*(v^0.16)
w=(w-32)/1.8
imprimir("temperatura efectiva: ",w)


fin