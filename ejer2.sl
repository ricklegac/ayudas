var
vec,vec2:vector[*]numerico
n:numerico
i,j,cont:numerico
inicio
cls()
imprimir("ingrese la cantidad de elementos del vector L1")
leer(n)
dim(vec,n+1)
dim(vec2,n)
cont=1
desde i = 1 hasta n{
		leer(vec[i])
}
vec[n+1]=0
desde i = 1 hasta n{
	desde j=1 hasta n-i{	
		si (vec[j] > vec[j+1]){
			intercambiar(vec[j],vec[j+1])
		}
	}
}
/*desde i = 1 hasta n{
		imprimir (vec[i]," ")
}*/
i=1
desde j=1 hasta n{
	si(vec[j]==vec[j+1]){
		inc(cont)
	sino
		vec2[i]=vec[j]
		inc(i)
		vec2[i]=cont
		cont=1
		inc(i)
	}
	
}
desde j=1 hasta n {
	si (vec2[j]<>0){
		imprimir(vec2[j], " ")
	}
	
}



fin