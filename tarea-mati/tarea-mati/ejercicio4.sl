var
mat:matriz[8,8]cadena
i,j,f,c:numerico


inicio
cls()
imprimir("Ingrese posicion del caballo\n")
leer(f,c)
desde i=1 hasta 8{//SE INICIALIZA EN VACIO PARA QUE LUEGO PUEDA IMRIMIR BIEN LA MATRIZ
	desde j=1 hasta 8{
		mat[i,j]=" "
	}
}
mat[f,c]="C"
//SE VERIFICA QUE LAS POSICIONES DE LOS SALTOS NO SALGAN DEL INIDCE DER LA MATRIZ
si(f-1>=1 and c+2<=8){
	mat[f-1,c+2]="*"
}
si(f+1<=8 and c+2<=8){
	mat[f+1,c+2]="*"
}
si(f-2>=1 and c+1<=8){
	mat[f-2,c+1]="*"
}

si(f+2<=8 and c+1<=8){
	mat[f+2,c+1]="*"
}

si(f-2>=1 and c-1>=1){
	mat[f-2,c-1]="*"
}
si(f+2<=8 and c-1>=1){
	mat[f+2,c-1]="*"
}

si(f-1>=1 and c-2>=1){
	mat[f-1,c-2]="*"
}

si(f+1<=8 and c-2>=1){
	mat[f+1,c-2]="*"
}

desde i=1 hasta 8{
	imprimir("________________________________________________\n")
	desde j=1 hasta 8{
		
		imprimir("|   ",mat[i,j]," ")
		
		
	}
	
	imprimir("|\n")
}
	imprimir("________________________________________________\n")
fin
