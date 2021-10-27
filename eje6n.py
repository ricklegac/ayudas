nombres=[]
notas=[]
nom=""
while nom!="*":
	print("ingrese nombre")
	nom=input()
	if nom=="*":
		break
	nombres.append(nom)
	print("ingrese nota")
	nota=int(input())
	notas.append(nota)
#print(type(nombres))
#print(type(notas))
print("alumnos con nota mayor a 60: ")
for i in range(0,len(notas)):
	if notas[i]>60:
		print(nombres[i])