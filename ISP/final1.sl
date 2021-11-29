var
edad: vector [*] numerico
anho: cadena
n,i,h,k,cont,SUMTOTAL_ED,sum_ed: numerico
clase:vector [*] registro
 { 
	fecha: cadena
 }
nombre: vector[*]cadena

	
inicio
cls()
imprimir("Ingrese la cantidad de alumnos: ", "\n")
leer(n)
dim(clase,n)
dim(nombre,n)
desde i=1 hasta n
{
	imprimir("Ingrese nombre del alumno: ")
	leer(nombre[i])
	imprimir("Ingrese la la fecha en formato dd/mm/aaaa: ", "\n")
	leer(clase[i].fecha)
}
desde i=1 hasta n
{
	imprimir("Nombre: ", nombre[i], "\n")
	imprimir("Fecha: ", clase[i].fecha, "\n")
}
dim(edad,n)
desde i=1 hasta n
{
	anho=substr(clase[i].fecha,7,4)
	edad[i]=2019-val(anho)
	SUMTOTAL_ED=SUMTOTAL_ED+edad[i]
}
SUMTOTAL_ED=78
h=1
desde i=1 hasta n
{
	sum_ed=sum_ed +edad[i]
	si (sum_ed == (SUMTOTAL_ED)/3)
	{
		cont=cont+1
		desde k=h hasta i
		{
			imprimir("Grupo: ", cont, "\n")
			imprimir(nombre[h], "  ", edad[h])
		}
		h=i+1 
	}
}
fin
