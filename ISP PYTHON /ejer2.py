def decimal_a_octal(N):
    octal = "" #variable que es un string 
    while N > 0:
        residuo = N % 8 
        octal = str(residuo) + octal #concatenamos el residuo 
        N = int(N / 8) #el numero dividimos entre 8 mientras sea mayor a cero seguimos haciendo asi 
    return octal
def suma_digitos(N): #descomponemos el numero digito por digito y lo sumamos
	suma =0
	aux =0
	while N != 0:
	    aux = N % 10
	    N //= 10
	    suma += aux
	return suma #devuelve la suma de los digitos pero en octal 

def main():
	N = int(input("ingrese N: "))
	if N<0:
		print("numero negativo")
		exit()
	else:
		n_en_octal = decimal_a_octal(N)
		suma_digi = suma_digitos(int(n_en_octal))
		print("""
Funcion A
N en base decimal y retorne el número en base octal:
			""")
		print(n_en_octal)
		print("""
Funcion B
N en base decimal y retorna la suma de los términos del número, pero en base octal:
			""")
		print(suma_digi)
if __name__ == '__main__':
	main()