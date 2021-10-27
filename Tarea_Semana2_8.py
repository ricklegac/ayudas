'''
Jamin Meza
4475837
ISP
'''
nombre=input("ingrese nombre del primer hermano ")
edad=input(f"ingrese la edad de {nombre}")
nombre2=input("ingrese nombre del segundo hermano ")
edad2=input(f"ingrese la edad de {nombre2}")
if edad>edad2:
    print(nombre, " es mayor que ",nombre2)
else:
    print(nombre2, "es mayor que ",nombre)
