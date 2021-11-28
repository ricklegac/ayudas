var
boleta:vector[1000]registro{
id:numerico
dia:numerico
mes: numerico
monto:numerico
}
cliente:vector[1000]registro{
id:numerico
ventas:numerico
}
vent_mes:vector[12]numerico
op:numerico
i,j,k,n:numerico
inicio
cls()
i=1
//en este ciclo lee todas las ventas del año para continuar con la venta debe ingresar 0 o para ver el resultado final del año ingresar 1
repetir
imprimir("Ingrese los datos de la nueva venta\n\n")
imprimir("Ingrese numero de cliente: ")
leer(boleta[i].id)
imprimir("Ingrese dia: ")
leer(boleta[i].dia)
imprimir("Ingrese mes: ")
leer(boleta[i].mes)
imprimir("Ingrese monto: ")
leer(boleta[i].monto)
cls()
imprimir("Desea hacer otra venta?\n")
imprimir("0-Hacer otra venta\n1-Inventario\n")
leer(op)
i=i+1
hasta(op==1)

n=i-1
desde i=1 hasta n {//se guarda en un vector el mondo de cada cleinte y el indice donde se acumula el monto es el ID de del cliente
	cliente[boleta[i].id].ventas=cliente[boleta[i].id].ventas+ boleta[i].monto
	cliente[boleta[i].id].id=boleta[i].id
	vent_mes[boleta[i].id]=vent_mes[boleta[i].id]+1 //en este vector de 12 elementos  se guarda la canitdad de ventas de cada mes
}

desde j=1 hasta n-1{ //metodo de ordenacion
	desde k=j+1 hasta n{
		si(cliente[k].ventas > cliente[j].ventas){
			intercambiar(cliente[k],cliente[j])
		}
	}
}




//imprime los resultados ordenados
imprimir("ID         VENTA POR CLIENTE\n")
desde i=1 hasta n{
	si(cliente[i].id<>0){
	imprimir(cliente[i].id,"              ",cliente[i].ventas)
	imprimir("\n")
  }

}

imprimir("MES       CANTIDAD\n")
desde i=1 hasta 12{
	
	imprimir(i,"            ",vent_mes[i])
	imprimir("\n")
	
}

fin
