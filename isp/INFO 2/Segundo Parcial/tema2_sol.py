'''
Maria Sol Ramirez Arguello 
4763782
'''
class Punto:
    x = 0
    y = 0
    def __init__(self, x, y): #referenciamos a las variables
        self.x = x 
        self.y = y
    def traslacion(self, a, b):
        self.x =self.x+ a #sumamos directo a las referencias
        self.y =self.y+ b
        punto = Punto(self.x, self.y)
        return punto
    def calcular_distancia(self, otro_Punto):
        sumaCuadrados = (otro_Punto.x - self.x)**2 + (otro_Punto.y - self.y)**2 #valor dentro de la raiz                                                                                                    
        distancia = sumaCuadrados**0.5 #elevamos a 1/2
        return distancia 
class Punto3D (Punto):
    z = 0
    def __init__(self, x, y, z):  
        self.x = x
        self.y = y
        self.z = z

    def traslacion3D(self, a, b, c): #func translacion3D
        self.x += a
        self.y += b
        self.z += c
        punto = Punto3D(self.x, self.y, self.z) #valos que luego retornamos
        return punto
    def calcular_distancia3D(self, otro_Punto):
        sumaCuadrados = (otro_Punto.x - self.x)**2 + (otro_Punto.y - self.y)**2 + (otro_Punto.z - self.z)**2
        distancia = sumaCuadrados**0.5
        return distancia
'''
    LECTURAS:
'''
print("Ingrese las coordenadas del Punto 1")
x1 = int(input("ingrese coordenada en x: "))
y1 = int(input("ingrese coordenada en y: "))
z1 = int(input("ingrese coordenada en z: "))
print("El punto 1 tiene los valores ", x1, y1, z1)
punto1 = Punto3D(x1, y1, z1) #
print("Ingrese las coordenadas del Punto 2")
x2 = int(input("ingrese coordenada en x: "))
y2 = int(input("ingrese coordenada en y: "))
z2 = int(input("ingrese coordenada en z: "))
print("El punto 1 tiene los valores ", x2, y2, z2)
punto2 = Punto3D(x2, y2, z2)
print("Ingrese las coordenadas de traslación")
a = int(input("ingrese coordenada en x: "))
b = int(input("ingrese coordenada en y: "))
c = int(input("ingrese coordenada en z: "))
distancia = punto1.calcular_distancia3D(punto2)
print("La distancia entre P1 y P2 es: ",distancia)
punto = punto1.traslacion3D(a, b, c)
#IMPRESION
print("Las nuevas cordenadas del punto trasladado son: ", punto.x, punto.y, punto.z)