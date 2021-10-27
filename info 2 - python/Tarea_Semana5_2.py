# 1.Brenda Barrientos (CI: 4688761 )
# 2.Sol Ramirez (CI:4763782 )
from datetime import date
class Tarjeta():
    #Contructor
    def __init__(self, nombreEntidadEmisora, estado, numero, titular, fechaCaducidad, saldo, registroOperaciones):
        self.nombreEntidadEmisora = nombreEntidadEmisora 
        self.estado = estado
        self.numero = numero
        self.titular = titular 
        self.fechaCaducidad = fechaCaducidad
        self.saldo = saldo
        self.registroOperaciones = registroOperaciones

    def activar(self):
        self.estado = True
        print("La tarjeta ha sido activada.")

    def anular(self):
        self.estado = False
        print("La tarjeta ha sido anulada.")

    def pagar(self):
        if self.estado == True:
            monto = int(input("Ingrese el monto que desea pagar: "))
            self.saldo = self.saldo - monto
            print("Pago exitoso")
        else:
            print("La tarjeta no se puede utilizar.")
        (self.registroOperaciones).append("Pago de "+str(monto)+" gs en fecha "+str(self.fechaCaducidad))
        
    def consultarRegistro(self):
        print(self.registroOperaciones)

    def obtenerSaldo(self):
        mensaje = ("Saldo actual: {}")
        print(mensaje.format(self.saldo))

def main():
    tarjeta = Tarjeta("ITAU",True, 4056, "Juan Perez", date.today(), 1000000, []) #Instancia
    tarjeta.activar()
    tarjeta.pagar()
    tarjeta.pagar()
    tarjeta.pagar()
    tarjeta.obtenerSaldo()
    tarjeta.consultarRegistro()
    tarjeta.anular()

main()