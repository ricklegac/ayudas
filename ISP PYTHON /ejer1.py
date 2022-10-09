def palabra_mas_larga(lista):
	return max(lista, key= len) #retornamos el elemento mas largo
def palabra_mas_corta(lista):
	return min(lista, key=len) #retornamos el elemento mas corto

cadena = input("ingrese una oracion: ") #ingresamos una cadena 

cadena_lista = cadena.split() #convertimos la oracion en una lista

print("lista de palabras en la oracion: {}".format(cadena_lista)) # mostramos la lista

if len(cadena_lista)>15:
	print("Cadena con cantidad de palabras mayor a 15")
	exit()
else:
	max_palabra=palabra_mas_larga(cadena_lista)
	#print(max_palabra)
	min_palabra= palabra_mas_corta(cadena_lista)

	diccionario = {'MasLarga':max_palabra,'MasCorta':min_palabra}

	print(diccionario)