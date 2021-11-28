tipos
alumno:  registro{
			apellido:cadena
			nombre:cadena
			puntaje:numerico
			nota:numerico
			}
tipos
	mejor: registro{
			p: numerico				
			n,a: cadena
				
			 }
var
alu:alumno
mejor_nota:mejor
prom_p,prom_n,cont:numerico
inicio
cls()
	mejor_nota.p=0
	prom_p=0
	prom_n=0
	cont=0
	set_stdin  ("clase.txt")
	set_stdout ("calificacion.txt") // todo lo que ponga despues de esta linea imprimira dentro del archivo calificacio.txt
	si( not set_stdin("clase.txt")){
		imprimir("NO SE PUDO ABRIR EL ARCHIVO")
	sino
		imprimir("APELLIDO\tNOMBRES\t-\tPUNTAJE\tNOTA\n")
		mientras(not eof()){
			set_ifs 	  ("\t")
			//PONER TODOS LOS LEER EN EL MISMO ORDE QUE EL .TXT 
			// OJO: CANTIDAD DE LEER ES IGUAL A CANTIDAD DE COLUMNAS DEL .TXT
			leer(alu.apellido)
			leer(alu.nombre)
			leer(alu.puntaje)
			alu.nota=calificacion_obtenida(alu.puntaje)
			si(mejor_nota.p < alu.nota){
				mejor_nota.p= alu.nota
				mejor_nota.a= alu.apellido
				mejor_nota.n= alu.nombre
			}
			si(not eof()){ // Para que no imprima basura en la ultima fila
				imprimir(alu.apellido," , ", alu.nombre," - ", alu.puntaje,"\t",alu.nota,"\n")	
				cont=cont+1
				// ponemos dentro del if por que o sino carga la basura en la suma de prom_p y prom_n y por ende calcula mal su promedio 
				prom_p=prom_p+alu.puntaje
				prom_n=prom_n+alu.nota
			}
		}
	}
	set_stdout("") // Todo lo que se imprima despues de esta linea se mostrara en la terminal, se usa solo cuando se usa set_stdout al comienzo para crear un archivo
	imprimir(cont)
	imprimir("\nEl mejor puntaje es de: ",mejor_nota.a," ",mejor_nota.n," con: ",mejor_nota.p,"\n")
	imprimir("\nEl promedio generaldel curso en puntaje ",prom_p/cont)
	imprimir("\nEl promedio generaldel curso en nota ",prom_n/cont)
fin

sub calificacion_obtenida(pf: numerico) retorna numerico
var
nota: numerico
inicio

	si(pf>=95 and pf<=100){
		nota=5
	sino si(pf>=80 and pf<=94)
		nota=4
	sino si(pf>=70 and pf<=79)
		nota=3
	sino si(pf>=60 and pf<=69)
		nota=2
	sino si(pf<60)
		nota=1
	}
	retorna nota
fin





