def elementos_comunes(d,e):
	a=[]
	b=[]
	k=0
	i=j=x=0
	for i in range(len(a)):
		a[i]= d[i]
		b[i] = e[i]
	for i in range(len(a)):
		for j in range(len(a)):
			if a[i]==b[j]:
				count = 0
				for x in range(k):
					if a[i]==c[k]:
						count=count +1
				if count == 0:
					c[k] = a[i]
	print("elementos comunes: ")
	i=0	
	print(k)
	for i in range(k):
		print (f" - ",c[i])
def bubblesort(list):
	for iter_num in range(len(list)-1,0,-1):
		for idx in range(iter_num):
			if list[idx]>list[idx+1]:
				temp = list[idx]
				list[idx] = list[idx+1]
				list[idx+1] = temp
					
def common_member(a, b):
	result = [i for i in a if i in b]
	return result

	
		
def main():
	m = int(input("ingrese M: "))
	a = []
	b = []
	print("ingrese los elementos del vector A: ")
	for x in range(m):
		value = int(input())
		a.append(value)
	print("ingrese los elementos del vector B: ")
	for x in range(m):
		value = int(input())
		b.append(value)	
	print(f"elementos comunes: {common_member(a,b)}")
	print("vector A y B ordenados: ")
	bubblesort(a)
	bubblesort(b)
	a= list(dict.fromkeys(a))
	b= list(dict.fromkeys(b))
	print(a)
	print(b)


if __name__ == '__main__':
	main()