var
r,g,b,w,c,m,y,k:numerico
inicio
cls()
imprimir("ingrese RGB\n")
leer(r,g,b)
mientras(r<0 or r>250){
imprimir("r fuera de rango, vuelva a ingresar\n")
leer(r)
}
mientras(g<0 or g>250){
imprimir("g fuera de rango, vuelva a ingresar\n") 
leer(g)
}
mientras(b<0 or b>250){
imprimir("b fuera de rango, vuelva a ingresar\n") 
leer(b)
}
w=maximo(r/255,g/255,b/255)
c=(w-(r/255))/w
m=(w-(g/255))/w
y=(w-(b/255))/w
k=1-w
imprimir("C=",c," M=",m," Y=", y," K= ",k)
fin
subrutina maximo(r:numerico; g:numerico; b:numerico) retorna numerico
var
mayor:numerico
inicio
	mayor=r
	si(g>mayor){
		mayor=g
	}
	si (b>mayor){
		mayor=b
	}
	retorna mayor
fin


