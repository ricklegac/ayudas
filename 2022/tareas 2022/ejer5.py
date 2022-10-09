# Algoritmo NB - 2022
# Integrantes: Integrante1(CI 222222), Integrante2(CI 111111), Integrante3(CI 000000)
# Tarea 2-U3
"""

"""

def invertir_numero(n):
    numero = 0
    while n != 0:
        numero = 10*numero+n % 10
        n //= 10
    return numero

def capicua(numero):
    return numero == invertir_numero(numero)

def main():
	print("ingrese numero ")
	cont =0
	while(cont<=1000):
		n = int(input())
		i = n 
		while 1:
			i+=1
			if capicua(i):
				print(f"{n}\t{i}")
				break
		cont +=1

if __name__ == "__main__":
	main()