
# Algoritmo NB - 2022
# Integrantes: Integrante1(CI 222222), Integrante2(CI 111111), Integrante3(CI 000000)
# Tarea 2-U3
def sin_caso_prubea():
	print("ingrese una lista de numeros (0 o numero negativo para salir): \n")
	n = int(input("ingrese numero: "))
	lista = []
	lista.append(n)
	mayor = n
	while 1:
		if n<=0:
			break
		else:
			n = int(input("ingrese numero: "))
			if n>0:
				lista.append(n)
			if n>mayor: 
				mayor = n

	print(lista)

	cont = 0 
	i=0 

	for i in range(len(lista)):
		if lista[i] == mayor:
			cont += 1
	
	print(f"el numero mayor es {mayor} y aparece {cont} veces")

def con_caso_prueba():
	print("lista de numeros: \n")
	lista = [3, 5, 2, 5, 5, 4, 2, 3, 1, 0]
	print(lista)
	mayor = lista[0]
	i=1
	for i in range(len(lista)):
		if lista[i] > mayor:
			mayor = lista[i]
	cont = 0	
	i=0
	#print(lista)
	for i in range(len(lista)):
		#print(lista[i])
		if lista[i] ==  mayor:
			cont+=1

	print(f"el numero mayor es {mayor} y aparece {cont} veces")

def main():

	print("""
		Ingrese opcion:
		1 - con caso prueba
		2 - sin caso prueba

		""")
	opc = int(input())
	if opc == 1:
		con_caso_prueba()
	if opc == 2:
		sin_caso_prubea()

if __name__ == "__main__":
	main()

