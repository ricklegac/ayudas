def most_frequent(List):
	counter = 0
	num = List[0]
	for i in List:
		curr_frequency = List.count(i)
		if(curr_frequency> counter):
			counter = curr_frequency
			num = i
	return num
palabras=[]
n=int(input("ingrese n: "))
for i in range(0,n):
	ele=input()
	palabras.append(ele)
print(f"palabras: ",palabras)
print(f"el mas repetido: ",most_frequent(palabras))