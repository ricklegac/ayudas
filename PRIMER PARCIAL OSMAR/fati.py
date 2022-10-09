# Algoritmo - Sección NB - 2022
# Primer Examen Parcial
# Nombre y Apellido: Fátima Belén Díaz Vera
# CI: 5313242
# Tema 1
from math import sqrt,pow
def coordenadas():
	x = int(input())
	y = int(input())
	z = int(input())
	return x,y,z
def calcular_distancia(x1,y1,z1,x2,y2,z2):
	distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2))
	return distancia

def traslaction(x1,y1,z1,a,b,c):
	
	return x1+a, y1+b,z1+c

def main():
	print("ingrese las coordenadas x y z: \n");
	x1,y1,z1 = coordenadas()
	x2,y2,z2 = coordenadas()
	distancia = calcular_distancia(x1,y1,z1,x2,y2,z2)
	print("distancia: {}".format(distancia))
	print("---traslacion---")
	a = int(input("ingrese a "))
	b = int(input("ingrese b "))
	c = int(input("ingrese c "))
	a1,b1,c1 = traslaction(x1,y1,z1,a,b,c)
	print("traslacion punto1: {} {} {}".format(a1,b1,c1))

if __name__=='__main__':
	main()