def dividir_numero(numero):

	result = [] 
	#dividimos el numero de a 3 de derecha a izquierda

	for i in range(len(numero), 0, -3): #recorremos el numero desde la derecha hasta la izquierda

		if i-3<0:
			result.append(numero[0:i-len(numero)]) #si la cantidad de cifras no es multiplo de 3 entonces sobrara 1 o 2 cifras
		else:
			result.append(numero[i - 3 : i ]) #agarramos de a 3 si es posible
	print(f"descomponemos {numero}")
	print (str(result))
	total = 0	
	for i in range(len(result)):
		total+= int(result[i])

	return total

def main():
	numero =  (input ('ingresa un numero: '))	
	aux = numero
	while(dividir_numero(numero)>1000):
		numero = str(dividir_numero(numero))
	
	if(int(numero)%37) == 0: #aca descompusimos el numero hasta obtener un numero menor a 1000
		print(f"{aux} si es multiplo de 37")
	else: 
		print(f"{aux} no es multiplo de 37")


if __name__ =="__main__":
	main()
