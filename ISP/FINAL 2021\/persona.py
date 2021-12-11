class Persona:
    nombre= None
    edad = None

    def mostar_datos(self): 
        print(self.nombre, self.edad)

persona1 = Persona('ricardo',24) #instancia 
print(persona1)