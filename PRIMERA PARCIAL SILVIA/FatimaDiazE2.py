# Algoritmo - Sección NB - 2022
# Primer Examen Parcial
# Nombre y Apellido: Fátima Belén Díaz Vera
# CI: 5313242
# Tema 2
"""FUNCION PARA DETECTAR SI UNA PALABRA ES PALINDROMA """
def palindromo(cadena):
	inicio = 0
	fin = len(cadena) - 1
	while cadena[inicio] == cadena[fin]:
	    if inicio >= fin:
	        return True
	    inicio += 1
	    fin -= 1
	return False
"""FUNCION MAIN"""
def main():
	cadena = input("ingrese una cadena: ")
	cadena =  cadena.replace(" ", "")
	
	if palindromo(cadena):
		print("la cadena es palindromo")
	else: 
		print("la cadena no es palindromo")

if __name__ == '__main__':
	main()