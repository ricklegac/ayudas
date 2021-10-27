'''
Maria Sol Ramirez Arguello 
4763782
'''
from math import sqrt #libreria que usamos para sqrt
class Punto:
	def __init__(self,x,y):
		self.x=x
		self.y=y

def calcular_distancia(p1,p2):
	return sqrt((p1.x - p2.x)**2 + (p1.y - p2.y)**2) #retornamos con pitagoras
def traslacion(p):
	a1=int(input("ingrese el valor de a: ")) #leemos cuanto se va a trasladar el punto1 en x
	b1=int(input("ingrese el valor de b: ")) #leemos cuanto se va a trasladar el punto 1 en y
	return (p.x+a1,p.y+b1) #retornamos variables multiples (podiamos retornar directo puntos)
print("Ingrese las coordenadas del punto 1: ")
x1= int(input("ingrese coordenada en x: "))
y1=	int(input("ingrese coordenada en y: "))
print("el punto 2 tiene valores ", "(",x1 ,",", y1,")")
print("Ingrese las coordenadas del punto 2: ")
x2= int(input("ingrese coordenada en x: "))
y2=	int(input("ingrese coordenada en y: "))
print("el punto 2 tiene valores " , "(",x2 ,",", y2,")")
print("Ingrese las coordenadas de traslacion para el Punto 1")
punto1=Punto(x1,y2)
punto2=Punto(x2,y2)
print("distancia entre P1 y P2: ", calcular_distancia(punto1,punto2)) #impresion final, resultado
punto1=Punto(x1,y1)
xtrasladado,ytrasladado=traslacion(punto1) #opcion para visualizar mejor el retorno en variables diferentes
print("valores del punto 1 trasladado: ", "(",xtrasladado,",",ytrasladado,")")