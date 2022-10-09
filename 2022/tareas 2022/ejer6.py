# Algoritmo NB - 2022
# Integrantes: Integrante1(CI 222222), Integrante2(CI 111111), Integrante3(CI 000000)
# Tarea 2-U3



def dividir_numero(numero):
	
	
	result = []
	for i in range(len(numero), 0, -3):

		if i-3<0:
			result.append(numero[0:i-len(numero)])
		else:
			result.append(numero[i - 3 : i ])

	print(" " + str(result))
	sum = 0	
	for i in range(len(result)):
		sum+= int(result[i])

	return sum

def main():
	numero =  (input ('Ingresa el valor de numero: '))	
	aux = numero
	while(dividir_numero(numero)>1000):
		numero = str(dividir_numero(numero))
	
	if(int(numero)%37) == 0:
		print(f"{aux} es multiplo de 37")


if __name__ =="__main__":
	main()
