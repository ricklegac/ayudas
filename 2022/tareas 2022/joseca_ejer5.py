
def mayor_suma(a):
	mayorsuma= 0
	n = len(a)
	for i in range(n):
		for j in range(n):
			sum_i = 0
			for k in range(j):
				sum_i = sum_i + a[k]
			if sum_i>mayorsuma:
				mayorsuma = sum_i
	return mayorsuma
n = int(input("ingrese la dimension: "))
while n>100:
	print("vuelva a ingresar! ")
	n = int(input("ingrese valor valido: "))
lista=[]
for x in range(n):
	value = int(input())
	lista.append(value)
print(f"la mayor suma: {mayor_suma(lista)}")
# for x in range(n):
# 	print(lista[x])
