'''
Mikaela Solis S
CI
'''
class Miles:
	def __init__(self,N,A,C,sal): #inicializamos los atributos como nos pide el enunciado
		self.N = N
		self.A = A
		self.C = C
		self.sal = sal
		self.count_f=len(self.appendMiles())
		self.count_n=len(str(self.N))

	def appendMiles(self): #le cargamos los puntos cada mil, de izquierda a derecha!
		i=self.N
		s=str(i)
		str1=""
		s1=[c for c in s]
		for i in range(len(s1)-1,-1,-1):
			str1 = s1[i]+str1 
			if(i%3==0 and i!=0):
				str1="."+str1 #append como en c
		return str1      
	def fmtMiles(self): # en esta funcion corroboramos segun nos pide el problema, 
		if (self.C == "+" or self.C == "-" or self.N<0): #si C es + o - o N negativo
			self.sal=""
		else:
			if(self.count_f == self.A):
				self.sal = self.appendMiles()
			elif(self.count_f < self.A):
				self.sal = self.appendMiles()
				for i in range(self.count_f,self.A):
					self.sal = self.sal + self.C
			elif(self.count_f > self.A):
				self.sal =""
		return self.sal #la cadena salida que imprimimos luego 

class ClaseFormato(Miles):
	def __init__(self,N,A,C,sal):
		super().__init__(N,A,C,sal)
	def appendMiles(self):
		i=self.N
		s=str(i)
		str1=""

		s1=[c for c in s]
		for i in range(len(s1)-1,-1,-1):
			str1 = s1[i]+str1
			if(i%3==0 and i!=0):
				str1=","+str1
		return str1
j=0
datos= int(input("ingrese un numero ")) #la cantidad de veces que leera N A y C para colocar dentro de un archivo! 
fp = open('numeros.txt','w') #open de forma de w (write), escritura.
while(j<datos):
    #print("\ndato nro: ",j+1)
	N=int(input("N: "))
	A=int(input("A:"))
	C=input("C:")
	M1 = Miles(N,A,C,"")
	fp.write(M1.fmtMiles()+"\n") #aca imprimimos solo dentro del archivo 
	j+=1
    #print(result)
print("Enviado tambien al archivo")
fp.close()
