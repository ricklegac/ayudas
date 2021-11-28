//Lucas Valdez, mi compañera de grupo es Andrea Cuellar
//El compilador que use es DevC++
 #include <iostream>
 #include <cstring>
 using namespace std;

void elim_car( char *, char* ) ;

int main()
{
    char cad[50];
    char car[1];
    cout<<"Ingrese una cadena de caracteres: ";
    cin>>.getline(cad,50,'\n');
    cout<<"Ingrese una letra: ";
    cin.getline(car,2,'\n');

    elim_car(cad, car);

    return 0;
}

void elim_car( char *cad, char *car )
{
    int tam=strlen(cad);
    int i;
    //char cadena[100];

        cout<<"\nEL TEXTO FINAL ES: ";

        for(int i=0;i<tam;i++){

        	if (cad[i] != car[0] )
            cout << cad[i];
        }
}
