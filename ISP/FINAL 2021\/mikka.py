'''
Mikka solis
ci
'''
class Miles:
	def __init__(self,N,A,C,sal):
		self.N = N
		self.A = A
		self.C = C
		self.sal = sal
		self.count_f=len(self.puntos())
		self.count_n=len(str(self.N))

	def puntos(self):
		i=self.N
		s=str(i)
		str1=""
		s1=[c for c in s]
		for i in range(len(s1)-1,-1,-1):
			str1 = s1[i]+str1
			if(i%3==0 and i!=0):
				str1="."+str1
		return str1
	def fmtMiles(self):
		if (self.C == "+" or self.C == "-" or self.N<0):
			self.sal=""
		else:
			if(self.count_f == self.A):
				self.sal = self.puntos()
			elif(self.count_f < self.A):
				self.sal = self.puntos()
				for i in range(self.count_f,self.A):
					self.sal = self.sal + self.C
			elif(self.count_f > self.A):
				self.sal =""
		return self.sal

class ClaseFormato(Miles):
	def __init__(self,N,A,C,sal):
		super().__init__(N,A,C,sal)
	def puntos(self):
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
cantidad= int(input("ingrese la cantidad de datos que desea cargar en el archivo: "))
fp = open('numeros.txt','w') #open de forma de w (write), escritura.
while(j<=cantidad):
    '''
      while True:
    try:
       userInput = int(input(message))       
    except ValueError:
       print("A NO ES UN ENTERO VUELVA A INGRESAR !!! .")
       continue
    else:
       return userInput 
       break
    '''
	N=int(input("N: "))
	A=int(input("A: "))
	C=input("C: " )
	M1 = Miles(N,A,C,"")
	fp.write(M1.fmtMiles()+"\n")
	j+=1
print("VER EL ARCHIVO \"numeros.txt\"")
fp.close()
