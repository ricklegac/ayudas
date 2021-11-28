''' 
    1- Brenda Barrientos (C.I 4688761)
    2- Sol Ramírez (C.I 4763782)
'''
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
    
class TarjetaDébito(Tarjeta):
    def __init__(self,CuentaAhorro,pinTransaccional):
        super().__init__("ITAU",True, 4056, "Juan Perez", date.today(), 1000000, [])
        self.CuentaAhorro=CuentaAhorro
        self.pinTransaccional=pinTransaccional
    
    def ObtenerCuentaAhorro(self):
        if self.estado==True:
            print("La cuenta de ahorro es ",self.CuentaAhorro)
        else:
            print("La tarjeta no ha sido activada, no es posible obtener la cuenta")
    
    def ObtenerPinTransaccional(self):
        if self.estado==True:
            if len(str(self.pinTransaccional))==4:
                print("El pin transaccional es ",self.pinTransaccional)
            else:
             print("El pin no es valido, debe contener 4 digitos")
        else:
            print("El pin no puede ser obtenido ya que la tarjeta no esta activada")
    
    def modificarPinTransaccional(self):
        if self.estado==True:
            if len(str(self.pinTransaccional))==4:
                pinModificado=int(input("Ingrese el nuevo pin: "))
                if len(str(pinModificado))==4:
                    self.pinTransaccional=pinModificado
                    print("El nuevo pin es: ",self.pinTransaccional)
            else:
                print("El nuevo pin no es valido, debe contener 4 digitos")
        else: print("La tarjeta no esta activada, no puede modificarse el pin")

def main():
    Debito=TarjetaDébito(123445,3785) #Instancia
    Debito.activar()
    Debito.pagar()
    Debito.pagar()
    Debito.obtenerSaldo()
    Debito.consultarRegistro()
    Debito.anular()
    Debito.ObtenerCuentaAhorro()
    Debito.ObtenerPinTransaccional()
    Debito.modificarPinTransaccional()

main()

