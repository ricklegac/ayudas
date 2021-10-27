# 1.Brenda Barrientos (CI: 4688761 )
# 2.Sol Ramirez (CI:4763782 )
class Coche():
    #Contructor
    def __init__(self, color, matricula, encendido, velocidad, combustible):
        self.color = color 
        self.matricula = matricula
        self.encendido = encendido
        self.velocidad = velocidad 
        self.combustible = combustible

    def arrancar(self):
        self.encendido = True
        print("El auto esta encendido.")

    def agregarMantenimiento(self, fechaMantenimiento, montoMantenimiento):
        self.fechaMantenimiento = fechaMantenimiento
        self.montoMantenimiento = montoMantenimiento
        mensaje = ("Las fechas del mantenimiento son {}")
        print(mensaje.format(self.fechaMantenimiento))

    def obtenerGastoMantenimiento(self,montoMantenimiento):
        print("El gasto total del mantenimiento es de: ",sum(montoMantenimiento))

    def ir(self):
        if self.encendido == True:
            print("El auto esta en movimiento.")
        else: 
            print("El auto no puede moverse porque no esta encendido.")

    def masRapido(self):
        mensaje = ("La velocidad actual es de {}")
        print(mensaje.format(self.velocidad))
        self.velocidad = self.velocidad + 10
        mensaje = ("La velocidad aumentada es de {}")
        print(mensaje.format(self.velocidad))

    def masLento(self):
        mensaje = ("La velocidad actual es de {}")
        print(mensaje.format(self.velocidad))
        self.velocidad = self.velocidad - 10
        mensaje = ("La velocidad disminuida es de {}")
        print(mensaje.format(self.velocidad))

    def parar(self):
        self.velocidad = 0
        print("El auto ya no esta en movimiento.")
    
    def obtenerInformacion(self):
        mensaje = ("El color del auto es {}, la matricula es {}, la cantidad de combustible es {}")
        print(mensaje.format(self.color, self.matricula, self.combustible))


def main():
    Automovil = Coche("Rojo", "ABC123", False, 60, "100") #Instancia
    Automovil.arrancar()
    Automovil.agregarMantenimiento(["24/09/2021","28/09/2021","04/10/2021"], [50000,10000,20000])
    Automovil.obtenerGastoMantenimiento([50000,10000,20000])
    Automovil.ir()
    Automovil.masLento()
    Automovil.masRapido()
    Automovil.parar()
    Automovil.obtenerInformacion()

main()
