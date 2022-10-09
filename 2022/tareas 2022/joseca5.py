def es_capicua(n):
    numero = 0
    while n != 0:
        numero = 10*numero+n % 10
        n //= 10
    return numero


def main():
	print("ingrese un numero ")
	cont =0
	while(cont<=1000):
		n = int(input())
		i = n 
		while 1:
			i+=1
			if es_capicua(i) == i:
				print(f"{n}\t{i}")
				break
		cont +=1

if __name__ == "__main__":
	main()