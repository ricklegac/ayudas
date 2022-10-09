
 

def esBisiesto(year):
        return year % 4 == 0 and year % 100 != 0 or year % 400 == 0

print("ingrese los anhos: \n")
year1 = int(input())
year2 = int(input())
while(year1 <1000 or year1>2500):
	print("el numero {} no se encuentra en el rango dado, por favor vuelva a ingresar! \n".format(year1))
	year1 = int(input())
while(year2 < 1000 or year2>2500):
	print("el numero {} no se encuentra en el rango dado, por favor vuelva a ingresar! \n".format(year1))
	year1 = int(input())
totaldias = 0
while(year1 < year2):
	if(esBisiesto(year1)): 
		totaldias += 366
	else:
		totaldias += 365
	year1= year1 + 1
print("total dias: {}".format(totaldias))
