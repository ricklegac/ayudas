var
	mi,ta,i,monto:numerico
inicio
	imprimir("ingrese monto inicial y tasa anual: \n")
	leer(mi,ta)
	monto=mi;
	mientras(monto<=mi*2){
		monto=monto*(ta/100)+monto
		inc(i)
	}
	imprimir("lograra duplicar el monto en ",i," anhos")

fin