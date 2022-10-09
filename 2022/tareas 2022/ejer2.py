# Algoritmo NB - 2022
# Integrantes: Integrante1(CI 222222), Integrante2(CI 111111), Integrante3(CI 000000)
# Tarea 2-U3

monto_inicial = int(input("ingrese un monto inicial: "))
interes_anual = float(input("ingrese un interes anual: "))
aux = monto_inicial
print("Nro anho\tmonto al inicio del anho\tmonto al final del anho")
i=0
while 1:
	if(monto_inicial <= aux * 2):
		i+=1
		print(f"{i}\t\t{monto_inicial}\t\t\t{monto_inicial+monto_inicial*(interes_anual/100)}")
		monto_inicial = monto_inicial + monto_inicial * (interes_anual/100)
	else:
		break

print("se requiere {} anhos para duplicar {} a una tasa de {}% anual".format(i,aux,interes_anual))