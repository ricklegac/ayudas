from io import open 
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


def main():
	archivo = open ("notas.txt", "r", encoding = "utf-8")
	archivo_salida = open("calificacion.txt","w", encoding="utf-8")
	count = 0
	mejor_calificacion=0 
	for linea in archivo:
		[apellido,nombre,puntaje]= linea.strip().split(':')
		archivo_salida.write(apellido + ", " + nombre + "\t\t\t"+ puntaje  +"\t"+ str(nota(puntaje))+ "\n")
		if nota(puntaje)>mejor_calificacion:
			mejor_calificacion = nota(puntaje)
			mejor_alumno = nombre + " " + apellido
			mejor_puntaje = puntaje
		if nota(puntaje) > 2:
			count = count + 1

	archivo_salida.write("Cantidad de aprobados " + str(count)+  "\n")
	archivo_salida.write("Mayor nota: "+ str(mejor_puntaje) + " Alumno con mejor puntaje " + mejor_alumno + " calificacion: " + str(mejor_calificacion))
	archivo.close()
if __name__ == '__main__':
	main()