''' 
    1- Brenda Barrientos (C.I 4688761)
    2- Sol Ramírez (C.I 4763782)
'''
class Vehiculo():
    def __init__(self,velocidadMaxima,nrodeRuedas,nrodeAsientos):
        self.velocidadMaxima = velocidadMaxima
        self.nrodeRuedas = nrodeRuedas
        self.nrodeAsientos = nrodeAsientos
    def obtener_velocidadMaxima(self):
        print("La velocidad max alcanzada es de ",self.velocidadMaxima,)

    def obtener_nroRuedas(self):
        print("El vehiculo posee ",self.nrodeRuedas," ruedas")

    def obtener_nroAsientos(self):
        print("El vehiculo posee ",self.nrodeAsientos," asientos")

class Coche(Vehiculo):
    def __init__(self, color, matricula, encendido, velocidad, combustible):
        super().__init__(180,4,4)
        self.color = color 
        self.matricula = matricula
        self.encendido = encendido
        self.velocidad = velocidad 
        self.combustible = combustible

    def arrancar(self):
        if self.encendido == True:
            print("El coche esta encendido.")

    def agregarMantenimiento(self, fechaMantenimiento, montoMantenimiento):
        self.fechaMantenimiento = fechaMantenimiento
        self.montoMantenimiento = montoMantenimiento
        mensaje = ("Las fechas del mantenimiento son {}")
        print(mensaje.format(self.fechaMantenimiento))
    
    def obtenerGastoMantenimiento(self,montoMantenimiento):
        print("El gasto total del mantenimiento es de: ",sum(montoMantenimiento))

    def ir(self):
        if self.encendido == True:
            print("El coche esta en movimiento.")
        else: 
            print("El coche no puede moverse porque no esta encendido.")
    
    def masRapido(self,velocidad):
        if self.encendido== True:
            if self.velocidadMaxima > self.velocidad:
                mensaje = ("La velocidad actual es de {}")
                print(mensaje.format(self.velocidad))
                self.velocidad = self.velocidad + 10
                mensaje = ("La velocidad aumentada es de {}")
                print(mensaje.format(self.velocidad))
            elif self.velocidadMaxima == self.velocidad:
                mensaje =("La velocidad actual es de {}, llego al limite de velocidad")
                print(mensaje.format(self.velocidadMaxima))
            else:
                mensaje = ("La velocidad actual es de {}")
                print(mensaje.format(self.velocidad))
                mensaje =("La velocidad ya no puede aumentar ha alcanzado el limite de velocidad de {}")
                print(mensaje.format(self.velocidadMaxima))
    
    def masLento(self,velocidad):
        if self.encendido== True:
            mensaje = ("La velocidad actual es de {}")
            print(mensaje.format(self.velocidad))
            self.velocidad = self.velocidad - 10
            mensaje = ("La velocidad disminuida es de {}")
            print(mensaje.format(self.velocidad))

    def parar(self,velocidad, parar):
        if self.encendido == True:
            for i in range (velocidad, parar, -10):
                print("El coche esta disminuyendo su velocidad a", i, "km/h")
            print("El coche se detuvo, llego a la velocidad de", parar, "km/h")

    def obtenerInformacion(self):
        mensaje = ("El color del auto es {}, la matricula es {}, la cantidad de combustible es {}")
        print(mensaje.format(self.color, self.matricula, self.combustible))

def main():
    Automovil = Coche("Rojo", "ABC123", True, 60, "100") #Instancia
    Automovil.obtener_velocidadMaxima()
    Automovil.obtener_nroRuedas()
    Automovil.obtener_nroAsientos()
    Automovil.arrancar()
    Automovil.agregarMantenimiento(["24/09/2021","28/09/2021","04/10/2021"], [50000,10000,20000])
    Automovil.obtenerGastoMantenimiento([50000,10000,20000])
    Automovil.ir()
    Automovil.masRapido(70)
    Automovil.masLento(70)
    Automovil.parar(50,0)
    Automovil.obtenerInformacion()

main()
        
    
