print("ingrese 4 variables: \n")
a = int(input("primera variable: "))
b = int(input("segunda variable: "))
c= int(input("tercera variable: "))
d= int(input("cuarta variable: "))
if b>a and b>c and b>d:
	mayor = b
	print("el mayor es b con {}".format(b))
elif c>b and c>a and c>d:
	mayor = c
	print("el mayor es c con {}".format(c))
elif a>b and a>c and a>d:
	mayor = a
	print("el mayor es a con {}".format(a))
elif d>a and d>b and d>c:
	mayor = d
	print("el mayor es d con {}".format(d))
else:
	print("No existe una sola variable con valor mayor")

