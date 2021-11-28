var
mat:matriz[8,8]cadena
f,c,i,j:numerico
inicio
cls()

imprimir("Ingrese posicion del alfil\n")
leer(f,c)
desde i=1 hasta 8{
	desde j=1 hasta 8{
		mat[i,j]="*"
  }
}
i=f
j=c
mientras(i>=1 and j>=1){
	mat[i,j]="p"
	i=i-1
	j=j-1
}

i=f
j=c
mientras(i>=1 and j<=8){
	mat[i,j]="p"
	i=i-1
	j=j+1
}


i=f
j=c
mientras(i<=8 and j>=1){
	mat[i,j]="p"
	i=i+1
	j=j-1
}

i=f
j=c
mientras(i<=8 and j<=8){
	mat[i,j]="p"
	i=i+1
	j=j+1
}
mat[f,c]="A"



desde i=1 hasta 8{
	imprimir("_________________________________\n")
	desde j=1 hasta 8{
		
		imprimir("| ",mat[i,j]," ")
		
		
	}
	
	imprimir("|\n")
}
	imprimir("_________________________________\n")

fin
