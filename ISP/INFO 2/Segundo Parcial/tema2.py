class Punto:
    x = 0
    y = 0
    
    def __init__(self, x, y):
        self.x = x 
        self.y = y

    def traslacion(self, a, b):
        self.x += a
        self.y += b
        p = Punto(self.x, self.y)
        return p

    def calcular_distancia(self, otro_Punto):
        sumaCuadrados = (otro_Punto.x - self.x)**2 + (otro_Punto.y - self.y)**2
        distancia = sumaCuadrados**0.5
        return distancia


class Punto3D (Punto):
    z = 0

    def __init__(self, x, y, z):  
        self.x = x
        self.y = y
        self.z = z

    def traslacion3D(self, a, b, c):
        self.x += a
        self.y += b
        self.z += c
        p = Punto3D(self.x, self.y, self.z)
        return p

    def calcular_distancia3D(self, otro_Punto):
        sumaCuadrados = (otro_Punto.x - self.x)**2 + (otro_Punto.y - self.y)**2 + (otro_Punto.z - self.z)**2
        distancia = sumaCuadrados**0.5
        return distancia


#inicia el programa
print("Ingrese las coordenadas del Punto 1")
x1 = int(input("Escribe el valor del componente x: "))
y1 = int(input("Escribe el valor del componente y: "))
z1 = int(input("Escribe el valor del componente z: "))
print("El punto 1 tiene los valores ({}, {}, {})\n".format(x1, y1, z1))
punto1 = Punto3D(x1, y1, z1)


print("Ingrese las coordenadas del Punto 2")
x2 = int(input("Escribe el valor del componente x: "))
y2 = int(input("Escribe el valor del componente y: "))
z2 = int(input("Escribe el valor del componente z: "))
print("El punto 1 tiene los valores ({}, {}, {})\n".format(x2, y2, z2))
punto2 = Punto3D(x2, y2, z2)

print("Ingrese las coordenadas de traslación")
a = int(input("Escribe el valor del componente x: "))
b = int(input("Escribe el valor del componente y: "))
c = int(input("Escribe el valor del componente z: "))

#salidas
distancia = punto1.calcular_distancia3D(punto2)
print("La distancia entre P1 y P2 es: {}".format(distancia))

p = punto1.traslacion3D(a, b, c)
print("Las nuevas cordenadas del punto trasladado son ({}, {}, {})".format(p.x, p.y, p.z))