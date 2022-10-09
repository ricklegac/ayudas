def fibonacci(N): 
	#en fibonacci tenemos que sumar las sumas anteriores, por eso definimos el comienzo cero y uno 
	primer_elemento = 0
	segundo_elemento = 1
	suma = 0
	cont = 1
	lista=[]
	while(cont<=N):
		lista.append(suma)
		cont+=1
		primer_elemento=segundo_elemento
		segundo_elemento = suma
		suma = primer_elemento + segundo_elemento
	return lista
suma = 0 
N = int(input("ingrese el numero: "))
if N<0: #si es cero no hace nada, lanza error
	print("numero negativo")
	exit()
else: 
	print(fibonacci(N)) #imprimimos la lista fibonnaci
	for i in fibonacci(N): #recorremos la lista y sumamos todos los elementos
		suma += i
		print("+ {}  ".format(i) ,end="")
	print("= {}".format(suma))
	suma,cant_p = 0,0
	cant_pares = []
	for i in fibonacci(N): #recorremos la lista y colocamos en otra lista los numeros pares 
		if i%2==0:
			cant_pares.append(i)
			cant_p+=1
	print("Cantidad de pares: {}(que son los numeros: {})".format(cant_p,cant_pares))		