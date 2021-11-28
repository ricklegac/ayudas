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


#empieza el programa
print("Ingrese las coordenadas del Punto 1")
x1 = int(input("Escribe el valor del componente x: "))
y1 = int(input("Escribe el valor del componente y: "))
print("El punto 1 tiene los valores ({}, {})\n".format(x1, y1))

print("Ingrese las coordenadas del Punto 2")
x2 = int(input("Escribe el valor del componente x: "))
y2 = int(input("Escribe el valor del componente y: "))
print("El punto 1 tiene los valores ({}, {})\n".format(x2, y2))


print("Ingrese las coordenadas de traslación")
a = int(input("Escribe el valor del componente x: "))
b = int(input("Escribe el valor del componente y: "))

punto1 = Punto(x1, y1)
punto2 = Punto(x2, y2)


print("\n") #imprime espacio
#distancia entre punto1 y punto2
distancia = punto1.calcular_distancia(punto2)
print("La distancia entre P1 y P2 es: {}".format(distancia))

#hacemos traslacion para el punto1
p = punto1.traslacion(a, b)
print("Las nuevas cordenadas del punto trasladado son ({}, {})".format(p.x, p.y))

