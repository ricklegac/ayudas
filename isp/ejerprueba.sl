var
lot,numero,cad:cadena
loteria,i,j,x,y,cont,numnum:numerico
inicio
cls()
loteria=100+random(900)
lot=str(loteria)
imprimir("ingrese numero\n")
leer(numero)
cad="0123456789"
desde i=1 hasta 3{
	desde j=1 hasta 3{
		x=pos(cad,lot[i])
		y=pos(cad,numero[j])
		si(x==y){
			cont=cont+1
		}
	}
}

imprimir("\nLoteria: ",lot,"\ttu numero:",numero,"\n")
si(cont==3){
	numnum=val(numero)
	si(numnum==loteria){
		imprimir("Ganaste el premio mayor 50000$")
	sino
		imprimir("Ganaste el segundo premio 30000$")
	}
	
}
si(cont==2){
	imprimir("Ganaste el tercer premio 10000$")
sino si(cont==1)
	imprimir("Ganaste el cuarto premio 1000$")
sino
	imprimir("Looser")
}



fin