tipos
	alumnos: registro{
				nombres,apellidos: cadena
				puntaje, nota: numerico
				}
tipos
	mejor: registro{
			p: numerico				
			n,a: cadena
				
				}

var
alu:alumnos
mayor:mejor
c,prom_p,prom_n:numerico
inicio
cls()
	c=0
prom_p=1
prom_n=1
	set_stdin  ("clase.txt")
	 //set_ifs 	  ("\t")
	set_stdout ("calificacion.txt")

	si( not set_stdin("clase.txt")){
		imprimir("NO SE PUDO ABRIR EL ARCHIVO")
	sino
		imprimir("APELLIDO\tNOMBRES\t-\tPUNTAJE\tNOTA\n")
			mientras(not eof()){
				set_ifs 	  ("\t")
				leer(alu.apellidos)
				leer(alu.nombres)
				leer(alu.puntaje)
				alu.nota= calificacion_obtenida(alu.puntaje)
				c=c+1
				imprimir(alu.apellidos," , ", alu.nombres,"\t-\t", alu.puntaje,"\t",alu.nota,"\n")
				prom_p=prom_p+alu.puntaje
				prom_n=prom_n+alu.nota
				si(mayor.p<alu.puntaje){
					mayor.p=alu.puntaje
					mayor.n=alu.nombres
					mayor.a=alu.apellidos
				}
			}
	}
	set_stdout ("")
		imprimir(c)
	imprimir("\nEl mejor puntaje es de:",mayor.a," ",mayor.n,"con: ",mayor.p,"\n")
	imprimir("\nEl promedio generaldel curso en puntaje ",prom_p/(c-1))
	imprimir("\nEl promedio generaldel curso en nota ",prom_n/(c-1))
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

