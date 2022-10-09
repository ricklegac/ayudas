def bubblesort(list):
	for iter_num in range(len(list)-1,0,-1):
			for idx in range(iter_num):
				if list[idx]>list[idx+1]:
					temp = list[idx]
					list[idx] = list[idx+1]
					list[idx+1] = temp
from random import randint
def quicksort(array):
    if len(array) < 2:
        return array

    low, same, high = [], [], []

    pivot = array[randint(0, len(array) - 1)]

    for item in array:
        if item < pivot:
            low.append(item)
        elif item == pivot:
            same.append(item)
        elif item > pivot:
            high.append(item)

    return quicksort(low) + same + quicksort(high)
def ordenar_lista(list,parametro):
	if parametro == 'A':
		bubblesort(list)
		print(list)
	else:
		quicksort(list)
		print(list)

n = int(input("ingrese la longitud de la lista: "))
v = []
print("ingrese los elementos: ")
for x in range(n):
	value = int(input())
	v.append(value)

parametro = input("ordenacion: (A) Ascendente (D) Descendente: ")
ordenar_lista(v,parametro)
