#Jamin elizabeth Meza Ojeda 4.475.837 ISP

class Contacto:
    nombre = ""
    telefono = 0
    email = ""

    def __init__(self, nombre, telefono, email):
        self.nombre = nombre
        self.telefono = telefono
        self.email = email



class Agenda:
    #list va a contener todos los contactos de la agenda

    list = []
    def __init__(self):
        list = []
        self.menu()

    def menu(self):
        while True:
            print("Agenda Personal")
            print("1- Añadir Contacto")
            print("2- Lista de contactos")
            print("3- Buscar contacto")
            print("4- Editar contacto")
            print("5- Cerrar agenda")
            opcion = int(input("Introduzca la opcion deseada: "))
            #opcion guarda el numero de la accion que quiere hacer el usuario 

            if opcion == 1:
                self.agregar()
            elif opcion == 2:
                self.lista()
            elif opcion == 3:
                self.buscar()
            elif opcion == 4:
                self.editar()
            elif opcion == 5:
                print("Saliendo de la agenda")
                exit()



    def agregar(self):
        print("-----------------------------")
        print("Añadir nuevo contacto")
        print("-----------------------------")
        
        #leemos los datos
        nombre = input("Introduzca el nombre: ")
        tel = int(input("Introduzc el telefono: "))
        email = input("Introduzca el email: ")

        #creamos el nuevo contacto
        nuevo = Contacto(nombre, tel, email)

        #agregamos a la lista de contactos
        self.list.append(nuevo)

    def lista(self):
        print("-----------------------------")
        print("Lista de contacto")
        print("-----------------------------")

        #en i guardamos un contacto y luego imprimimos el valor
        for i in self.list:
            print(i.nombre)

    def buscar(self):
        print("-----------------------------")
        print("Buscador de contactos")
        print("-----------------------------")

        nombre = input("Introduzca el nombre del contacto: ")

        encontrado = False #inicialmente no encontramos

        for i in self.list:
            if i.nombre.find(nombre) >= 0:
                encontrado = True
                buscado = i
                break
        
        #encontado es True solo si se encuentra el contacto
        if encontrado == True:
            print("Datos del contacto")
            print("Nombre: {}".format(buscado.nombre))
            print("Telefono: {}".format(buscado.telefono))
            print("E-mail: {}".format(buscado.email))
            return buscado
        else:
            print("No encontrado")
            return None

    def editar(self):
        print("-----------------------------")
        print("Editar contacto")
        print("-----------------------------")

        contact = self.buscar() #buscamos primero el contacto

        if contact != None: #si es None es porque no existe la persona en la agenda
            print("Selecciona que quieres editar:")
            print("1- Nombre")
            print("2- Telefono")
            print("3- E-mail")
            print("4- Vovler")
            opcion = int(input("Introduzca la opcon deseada: "))

            if opcion == 1:
                contact.nombre = input("Escribe el nuevo nombre: ")
            elif opcion == 2:
                contact.telefono = int(input("Escriba el nuevo numero: "))
            elif opcion == 3:
                contact.email = input("Escriba el nuevo e-mail: ")
            else:
                print("No se modifico ningun dato del contacto")


        else:
            print("No existe el contacto buscado")

        
agenda = Agenda()