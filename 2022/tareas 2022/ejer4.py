# Algoritmo NB - 2022
# Integrantes: Integrante1(CI 222222), Integrante2(CI 111111), Integrante3(CI 000000)
# Tarea 2-U3

def descomponer(n):
	primos = []
	for i in range(2, n + 1):
	    while n % i == 0:
	        primos.append(i)
	        n = n / i

	return len(primos) , primos
	for i in range(len(primos)):
	    print(primos[i])


def main():
	print("ingrese rango de valores: ")
	a = int(input())
	b = int(input())
	cont = 0
	print("numero analizado\tfactores")
	for x in range(a,b):
		cant, fact_primos = descomponer(x)
		if cant == 3:
			print(f"{x}\t\t\t{fact_primos}")
			cont +=1
	print(f"exiten {cont} numeros que cumplen la condicion")
if __name__=="__main__":
	main()