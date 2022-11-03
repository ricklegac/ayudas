def ordenar(lista):
	n = len(lista)
	for i in range(n-1):
		flag = 0
		for j in range(n-1):
			if lista[j] > lista[j + 1]: 
				tmp = lista[j]
				lista[j] = lista[j + 1]
				lista[j + 1] = tmp
				flag = 1
		if flag == 0:
			break
	return lista
def ingrese_valores():
	print("ingrese tamaño del vector: ",end=" ")
	n = int(input())
	lista = []
	print("ingrese los elementos del vector: ")
	for i in range(n):
		value = int(input())
		lista.append(value)
	return lista
def main():
	
	lista = ingrese_valores()
	visited = set()	
	dup = [x for x in lista if x in visited or (visited.add(x) or False)]	
	while len(list(dup))!=0:
		print(f"la lista tiene elementos duplicados({dup}), vuelva a ingresar! ")
		lista=ingrese_valores()
		visited.clear()
		dup.clear()
		dup = [x for x in lista if x in visited or (visited.add(x) or False)]
	
	ordenar(lista)
	n = len(lista)
	nlista = [None] * (n)
	i = 0
	q = n-1
	for x in range(n):
		if (x+1)%2!=0:
			nlista[i] = lista[x]
			i = i+1
			#print(f"i{i}")
		else:
			#print(f"q{q}")
			nlista[q] = lista[x]
			q= q-1

	print(nlista)

	#print(f"lista ordenada: \n{lista}")
	print()
	#for i in range(n,1,-1):
	#	print(i)
if __name__=='__main__':
	main()


