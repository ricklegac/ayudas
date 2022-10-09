fecha= input("ingrese una fecha en formato DDMMAAAA: ")
d = int(fecha[0:2])
m = int(fecha[2:4])
a = int(fecha[4:])
y0 = a - ( 14 - m ) / 12
x = y0 + y0/4 - y0/100 + y0/400
m0 = m + 12 * ( (14 - m)/12 ) - 2
d0 = (d + x + (31 * m0)/12) % 7
d0 = int(d0)
dias = ['domingo','lunes','martes','miercoles','jueves','viernes','sabado']
print("la fecha: {}/{}/{} es {} ".format(d,m,a, dias[d0])) 
