
var
x:vector[*]numerico
y:vector[*]numerico

m,i:numerico
inicio
cls()
imprimir("Ingrese cantidad de puntos a ingresar: ")
leer(m)
dim(x,m)
dim(y,m)
desde i=1 hasta m
{
	imprimir("Ingrese el ",i,"º","punto\n" )
	leer(x[i],y[i])
	
}
colineales(x,y,m)
cercanos(x,y,m)

fin



subrutina colineales(x:vector[*]numerico;y:vector[*]numerico;m:numerico)

var
i,j:numerico
xx:vector[*]numerico
yy:vector[*]numerico
cont:numerico
inicio
dim(xx,m-1)
dim(yy,m-1)


	

desde i=1 hasta m-1{
	
		xx[i]=x[i]-x[i+1]//halla AB Y BC y luego ve si sus proporciones son iguales
		yy[i]=y[i]-y[i+1]
		
	
}

desde i=1 hasta m-2
{
	si(xx[i]/yy[i]==(xx[i+1]/yy[i+1]))//si los proporciones son iguales entonces son colinealesy aumenta contador
	{
		cont=cont+1
	}
}

si(cont==(m-2))
{
	imprimir("Estan en la misma recta\n")
sino
	imprimir("No estan en la misma recta\n")
}
fin



subrutina cercanos(x:vector[*]numerico;y:vector[*]numerico;m:numerico)

var
menor,x1,y1,x2,y2,i,j,d:numerico
inicio
menor=((x[1]-x[2])^2+(y[1]-y[2])^2)^(1/2)
x1=x[1]
x2=x[2]
y1=y[1]
y2=y[2]
desde i=1 hasta m-1{
	desde j=i+1 hasta m
	{
		d=((x[i]-x[j])^2+(y[i]-y[j])^2)^(1/2)
		si(menor>d){
			menor=d
			x1=x[i]
			x2=x[j]
			y1=y[i]
			y2=y[j]
		}
	}
}
imprimir("Los puntos mas cercanos son : (", x1,",",y1,")  ","  (", x2,",",y2,")")
imprimir("\n")
fin






