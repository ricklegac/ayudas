#definicion y solucion delproblema 
def primos_entre_si(i,j):
	t=0
	while(j>0):
		t=i%j
		i=j
		j = t 
	if i == 1:
		print ("*" , end = " ") #si son primos relativos
	else:	
		print ("-" , end = " ") #si no son primos relativos

def main(): 
	print("ingrese n: ")
	n = int(input())
	while(n<1 or n >20):
		n = int(input("por favor vuelva a introducir, 1<=n<=20"))
	a=[]
	for i in range(n):
	    row =[]
	    for j in range(n):
	    	
	    	primos_entre_si(i+1,j+1) # se envia un valor mas porque el indice de python es zero index
	    print()
if __name__=="__main__":
	main()