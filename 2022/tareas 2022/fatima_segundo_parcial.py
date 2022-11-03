from io import open #libreria para leer el archivo 
def nota(puntaje):
	nota = int(puntaje)
	if nota < 60: 
		calificacion = 1
	elif nota >= 60 and nota <=69:
		calificacion = 2
	elif nota >= 70 and nota <=79: 
		calificacion = 3
	elif nota >= 80 and nota <=89:
		calificacion = 4
	else:
		calificacion = 5
	return calificacion
#variables para la escritura y lectura de los archivos requeridos 
salida = open("calificacion.txt", "w", encoding= "utf-8")
archivo = open ("notas.txt", "r", encoding = "utf-8")
count = 0 
salida.write("Apellido, Nombre \t\t Puntaje Nota\n")
mejor = 0
aprobados = 0
#recorremos el archivo de lectura
for linea in archivo:
	count = count + 1
	[apellido,nombre,puntaje]= linea.strip().split(':')
	salida.write(apellido + ", " + nombre + "\t\t\t"+ puntaje  +"\t"+ str(nota(puntaje)) + "\n")	
	#verificamos lo que pasaron la materia
	if nota(puntaje) > 2:
		aprobados = aprobados +1
	#la mejor nota vemos aqui 
	if nota(puntaje)>mejor:
		mejor = nota(puntaje);
		alumno = nombre + " " + apellido
		puntaje_mayor = puntaje
salida.write("Cantidad de aprobados " + str(aprobados)+  "\n")
salida.write("Mayor nota: " + str(mejor) + " Mejor Puntaje: " + str(puntaje_mayor)  + " \nAlumno con mejor puntaje: " + alumno )	
archivo.close()