#Oscar Medina
#Ci 6297872
class Miles:
	def __init__(self,N,A,C,sal):
		self.N = N
		self.A = A
		self.C = C
		self.sal = sal
		self.cantFormateado =len(self.mlFormat())
		self.cantNormal=len(str(self.N))

	def mlFormat(self):
		i=self.N
		s=str(i)
		str1=""
		s1=[Elm for Elm in s]
		for i in range(len(s1)-1,-1,-1):
			str1 = s1[i]+str1
			if(i%3==0 and i!=0):
				str1="."+str1
		return str1
		

	def fmtMiles(self):
		if (self.C == "+" or self.C == "-" or self.N<0):
			self.sal=""
		else:
			if(self.cantFormateado == self.A):
				self.sal = self.mlFormat()
			elif(self.cantFormateado < self.A):
				self.sal = self.mlFormat()
				for i in range(self.cantFormateado,self.A):
					self.sal = self.sal + self.C
			elif(self.cantFormateado > self.A):
				self.sal =""
		return self.sal

class fmtMilesAmerican(Miles):
	def __init__(self,N,A,C,sal):
		super().__init__(N,A,C,sal)
	def mlFormat(self):
		i=self.N
		s=str(i)
		str1=""
		s1=[Elm for Elm in s]
		for i in range(len(s1)-1,-1,-1):
			str1 = s1[i]+str1
			if(i%3==0 and i!=0):
				str1=","+str1
		return str1

f = open ('numeros.txt','w')
M1 = Miles(91,4,"z","")
M2 = Miles(156,6,"!","")
M3 = Miles(978,3,"?","")
M4 = Miles(-5,10,"#","")
M5 = Miles(18,0,"=","")
M6 = Miles(20,2,"+","")
M7 = Miles(111222,7,"*","")
M8 = Miles(78212191,12,"@","")
M9 = Miles(182910,10,"#","")
M10 = fmtMilesAmerican(111222,7,"*","")
M11 = fmtMilesAmerican(78212191,12,"@","")
M12 = fmtMilesAmerican(182910,10,"#","")
f.write(M1.fmtMiles()+"\n")
f.write(M2.fmtMiles()+"\n")
f.write(M3.fmtMiles()+"\n")
f.write(M4.fmtMiles()+"\n")
f.write(M5.fmtMiles()+"\n")
f.write(M6.fmtMiles()+"\n")
f.write(M7.fmtMiles()+"\n")
f.write(M8.fmtMiles()+"\n")
f.write(M9.fmtMiles()+"\n")
f.write(M10.fmtMiles()+"\n")
f.write(M11.fmtMiles()+"\n")
f.write(M12.fmtMiles()+"\n")
f.close()
