def main():
	text = open("sample.txt", "r")


	d = dict()

	for line in text:
		
		line = line.strip()


		line = line.lower()

		
		palabras = line.split(" ")
							

		for palabra in palabras:
			
			if palabra in d:
				
				d[palabra] = d[palabra] + 1
			else:
				
				d[palabra] = 1


	for key in list(d.keys()):
		print(key, ":", d[key])

if __name__ == '__main__':
	main()