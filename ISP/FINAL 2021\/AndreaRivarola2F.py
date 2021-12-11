'''
Andrea Diana Rivarola Martinez
ci: 5770010
Ingenieria en Sistemas de Producción
'''

import itertools #para obtener un id para cada contacto
import csv #lo usamos para añadir a un fichero para mejor visualizacion de los datos
import re #para hacer un buscador no solo de nombres, tambien podemos añadir para buscar por telefono o email solo que no se agrego porque eso no se pedia

'''
    importante: la opcion de modificar esta en la parte de buscar contacto!
'''

'''
    se puede tener agenda.csv, pero igual todo el codigo esta ejecutado en consola, 
    se crea un fichero agenda.csv (esta de mas porque no pide)
'''
class Contacto: 
    id = itertools.count() #usamos para que cada contacto tenga un id diferente, 
    #https://docs.python.org/3/library/itertools.html 
    def __init__ (self, nombre, telefono, email):  #constructor de la clase contacto 
        
        self.codigo =next(self.id)
        self.nombre= nombre
        self.telefono = telefono
        self.email = email
class Agenda: 

    def __init__(self): #constructor que se solicito en el enunciado 
        self.contactos=[] #creamos una lista donde almacenamos los contactos

    def ordenarNombre(self):
        self.contactos.sort(key = lambda contacto: contacto.nombre) #ordenamos los contactos por nombre

    '''
        en la siguientes lineas de codigo las funciones solicitadas en el enunciado: 
    '''
    def anadir(self,nombre, telefono, email):
        contacto = Contacto(nombre,telefono,email) #no le pasamos el identificador porque ya lo pasamos en class Contacto!
        self.contactos.append(contacto)
    
    def lista(self): #funcion listar!
        self.submenuOrden() #para ordenar la lista mostrada!
        for contacto in self.contactos:
            self.imprimeContacto(contacto)
    
    def buscar(self, textoBuscar): #funcion para buscar a un contacto, no es necesario ingresar todo el nombre, te busca igual!
        encontrado = 0
        for contacto in self.contactos:
            if re.findall(textoBuscar,contacto.nombre):
                self.imprimeContacto(contacto)
                encontrado += 1
                self.submenuBuscar(contacto.codigo)
        if encontrado == 0:
            self.noEncontrado()
    
    '''
    #esta funcion al final no use porque no fue necesario borrar, pero descomentando este codigo funciona!
    def borrar(self, codigo):
        for contacto in self.contactos:
            if contacto.codigo== codigo:
                print('quiere borrar el contacto? (s/n)')
                opcion = str(input(""))
                if opcion == 's' or opcion == 'S':
                    del self.contactos[codigo]
                elif opcion == 'n' or opcion == 'N':
                    break
    '''            
    def modificar(self, codigo): #funcion que modifica el contacto! 
        for contacto in self.contactos:
            if contacto.codigo == codigo:
                del self.contactos[codigo] #primeramente eliminamos el contacto por el codigoid y luego solicitamos los nuevos datos 
                nombre = str(input ('ingrese el nombre nuevo del contacto: ')) 
                telefono = str(input ('ingrese el telefono nuevo del contacto: '))
                email = str(input ('ingrese el email nuevo del contacto: '))
                contacto = Contacto(nombre, telefono, email)
                self.contactos.append(contacto)
                break
    def submenuBuscar(self,codigo): #aca pedimos al usuario si quiere modificar su contacto!
        print('\n quieres modificar el contacto? ingrese m: ')
        opcion = str(input(""))
        if opcion == 'm' or opcion == 'M':
            self.modificar(codigo)
        #elif opcion == 'e' or opcion == 'E': #el borrado no es necesario
        #    self.borrar(codigo)

    def submenuOrden(self): #este agregamos de mas pero es para ordenar por nombre los contactos
        self.ordenarNombre()

    def grabar(self):
        with open('agenda.csv', 'w') as fichero:
            escribir = csv.writer(fichero)
            escribir.writerow(('codigo, nombre, telefono, email'))
            for contacto in self.contactos:
                escribir.writerow((contacto.codigo, contacto.nombre, contacto.telefono, contacto.email))

    def imprimeContacto(self, contacto): #impresion de los contactos
        print('nombre: {}'.format(contacto.nombre))
        print('telefono: {}'.format(contacto.telefono))
        print('email: {}'.format(contacto.email))

    def noEncontrado(self): #funcion que solo imprime si no encontro el conacto 
        print('contacto no encontrado\n')
        print()

def main():
    agenda= Agenda()
    try:
        with open('agenda.csv','w') as fichero:
            lector=csv.DictReader(fichero,delimiter=',') #el archivo esta separado por comas
            for fila in lector:
                agenda.anadir(fila['nombre'],fila['telefono'],fila['email'])
    except:
        print(' no se pudo abrir el fichero ')
    
    while True:
        menu = str(input(
                """
                    Selecciona una opcion:
1. añadir contacto
2. mostar lista de contactos
3. buscar contacto ( puede modificar aqui el contacto deseado )
5. salir 
                """
        ))
        if menu=='1':
            nombre = str(input ('ingrese el nombre nuevo del contacto: ')) 
            telefono = str(input ('ingrese el telefono nuevo del contacto: '))
            email = str(input ('ingrese el email nuevo del contacto: ')) 
            agenda.anadir(nombre, telefono, email)    
            agenda.grabar()   
        elif menu == '2':
            agenda.lista()
        elif menu == '3':
            texto= str(input('ingrese contacto a buscar en la agenda: '))
            agenda.buscar(texto)
            agenda.grabar()
        elif menu == '5':
            print('salida!')
            agenda.grabar()
            exit()
        
        else: 
            print('la opcion no es valida!\n')

if __name__ == '__main__':
    main()
