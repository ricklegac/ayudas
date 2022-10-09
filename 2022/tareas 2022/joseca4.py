def factores_primos(numero): #funcion que descompone en factores primos una funcion 
	primos = []
	for i in range(2, numero + 1):
	    while numero % i == 0:
	        primos.append(i)
	        numero = numero / i

	return primos


def main(): #funcion main 
	#lecturas iniciales del problema
	print("ingrese rango de valores: ")
	a = int(input("ingrese a"))
	b = int(input("ingrese b"))
	cont = 0 #contador para saber cuantos numeros cumplen con la condicion 
	print("numero analizado\tfactores")
	for i in range(a,b):
		fact_primos = factores_primos(i)
		if len(fact_primos) == 3:
			print(f"{i}\t\t{fact_primos}")
			cont +=1
	print(f"exiten {cont} numeros que cumplen la condicion")

if __name__=="__main__":
	main()