def menu():
    print("""
        1. Añadir contacto
        2. Lista de contacto
        3. Buscar Contacto
        4. Editar Contacto
        5. Cerrar Agenda
    """)
    print()

opcion_menu = 0
while opcion_menu != 5:
    opcion_menu = int(input('ingrese que quiere hacer: '))
    menu()
    if opcion_menu == 1:
        print('ingrese el nombre de la lista que desea crear: ')