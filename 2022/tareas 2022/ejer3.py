# Algoritmo NB - 2022
# Integrantes: Integrante1(CI 222222), Integrante2(CI 111111), Integrante3(CI 000000)
# Tarea 2-U3
def guion_asterisco(i,j):
	t=0
	while(j>0):
		t=i%j
		i=j
		j = t 
	if i == 1:
		return "*"
	else:	
		return "-"
print("ingrese n: ")
n = int(input())
while(n<1 or n >20):
	n = int(input("por favor vuelva a introducir, 1<=n<=20"))
a=[]
for i in range(n):
    row =[]
    for j in range(n):
    	print(guion_asterisco(i+1,j+1), end = " ")
    print()
#Z

#print(a)