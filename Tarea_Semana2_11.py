'''
Jamin Meza
4475837
ISP
'''
numero=input("ingrese un numero de 3 cifras: ")
#se puede hacer de distintas maneras
#modo 1
print(numero[::-1])
#modo 2
def invertir_numero(n):
    numero = 0
    while n != 0:
        numero = 10*numero+n % 10
        n //= 10
    return numero
print(invertir_numero(int(numero)))
