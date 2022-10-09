def esPalindromo(palabra): 
	for i in range(0,int(len(palabra)/2)): #Es suficiente con analizar la mitad  
  		if palabra[i]!=palabra[-i-1]:
    		return False
	return True
def main():	
	palabra=input('Escriba una palabra: ').lower() 
	palabra=palabra.replace(" ","")
	print(palabra, '¿es un palindromo?',esPalindromo(palabra)) 

if __name__ == '__main__':
	main()