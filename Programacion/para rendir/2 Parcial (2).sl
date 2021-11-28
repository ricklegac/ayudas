var

Notas: vector[*] registro{
				nro_cedula,p1,p2, pf, PTotal, Nota: numerico
				nombres,apellidos: cadena
				}
c,i, j, max_puntaje: numerico
nro_cedula,parcial1,parcial2, ef: numerico
nombres,apellidos: cadena
inicio
cls()
	set_stdin  ("puntajes.txt")
   set_ifs 	  (",")
	set_stdout ("Informe.txt")
   //Calculos
	//Primero contamos cuantos alumnos hay
	mientras ( not eof() ) {
      leer (nro_cedula, apellidos, nombres, parcial1, parcial2, ef)
		c=c+1
   }
	//Por si se agrega un salto de linea al final del archivo
	si(apellidos<>""){
		c=c+1
	}
//c representa los n alumnos + una fila adicional para los promedios al final
	dim(Notas,c)

	set_stdin  ("c:/examen/puntajes.txt")
	i=1
	mientras ( not eof() and i<c) {
      leer (Notas[i].nro_cedula, Notas[i].apellidos, Notas[i].nombres, Notas[i].p1, Notas[i].p2, Notas[i].pf)
		//Hacemos el calculo de PTotal y de Nota mediante las funciones solicitadas
		Notas[i].PTotal=calc_puntaje_total(Notas[i].p1,Notas[i].p2,Notas[i].pf)
		Notas[i].Nota=calc_nota(Notas[i].PTotal)
		i=i+1
   }
	//Ordenamos por apellido por el metodo de burbuja
	desde i = 1 hasta c-2{
		desde j =1 hasta c-i-1{
			si(Notas[j].apellidos>Notas[j+1].apellidos){
				intercambiar(Notas[j],Notas[j+1])
			}
		}
	}
	//Imprimimos la planilla de puntajes ya ordenada
	imprimir("a)Planilla de Calificaciones\n")
	imprimir("CI\t\tApeliidos y Nombres\tP1\tP2\tEF\tP.Total\tNota")
	imprimir("\n..\t\t...................\t..\t..\t..\t.......\t....")

	desde i=1 hasta c-1{
		imprimir("\n",Notas[i].nro_cedula,"\t\t", Notas[i].apellidos,",", Notas[i].nombres,"\t\t", Notas[i].p1,"\t", Notas[i].p2,"\t", Notas[i].pf,"\t",Notas[i].PTotal,"\t",Notas[i].Nota)
	}

	//Procedemos a calcular las sumas parciales de cada columna en la correspondiente columna y ultima fila (la fila c)
	desde i=1 hasta c-1{
		Notas[c].p1= Notas[c].p1 + Notas[i].p1
		Notas[c].p2= Notas[c].p2 + Notas[i].p2
		Notas[c].pf= Notas[c].pf + Notas[i].pf
		Notas[c].PTotal= Notas[c].PTotal + Notas[i].PTotal
		Notas[c].Nota= Notas[c].Nota + Notas[i].Nota
	}
	//Dividimos las sumas entre la cantidad de registros para obtener finalmente el promedio
	Notas[c].p1= Notas[c].p1/(c-1)
	Notas[c].p2= Notas[c].p2/(c-1)
	Notas[c].pf= Notas[c].pf/(c-1)
	Notas[c].PTotal= Notas[c].PTotal/(c-1)
	Notas[c].Nota= Notas[c].Nota/(c-1)
	imprimir("\n\nb) Promedio\t\t\t\t",Notas[c].p1,"\t",Notas[c].p2,"\t",Notas[c].pf,"\t",Notas[c].PTotal,"\t",Notas[c].Nota)
	
	desde i=1 hasta c-1{
		si(Notas[i].PTotal>max_puntaje){
			max_puntaje=Notas[i].PTotal
		}
	}
	
	imprimir("\n\nc) Mejor alumno:")
	desde i=1 hasta c-1{
		si(Notas[i].PTotal==max_puntaje){
			imprimir("\n\t",Notas[i].apellidos+","+Notas[i].nombres)
		}
	}
set_stdout ("")
imprimir("Informe generado exitosamente :). Vaya a c:/examen/Informe.txt para verlo")
fin

sub calc_puntaje_total(p1,p2,pf: numerico) retorna numerico
var
pt: numerico
inicio
	pt=int(0.4*((p1+p2)/2)+0.6*pf)
	retorna pt
fin

sub calc_nota(pf: numerico) retorna numerico
var
nota: numerico
inicio
	si(pf>=91 and pf<=100){
		nota=5
	sino si(pf>=81 and pf<=90)
		nota=4
	sino si(pf>=71 and pf<=80)
		nota=3
	sino si(pf>=60 and pf<=70)
		nota=2
	sino si(pf<=59)
		nota=1
	}
	retorna nota
fin
