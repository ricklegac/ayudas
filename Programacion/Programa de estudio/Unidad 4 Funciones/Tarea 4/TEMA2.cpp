//Lucas Valdez, mi compañera de grupo es Andrea Cuellar
//El compilador que use es DevC++
 #include <iostream>

 using namespace std;
 void buscar_inv(string , string );

int main(){
    string A ;
    string B ;
    cout<<"Ingrese una cadena de caracteres: ";
    getline(cin,A);

    cout<<"Ingrese cadena a buscar: ";
    getline(cin,B);

    buscar_inv(A, B);
    return 0;
}

void buscar_inv(string A, string B){

   	size_t found = A.find(B);
    if(found!=std::string::npos){
        std::cout << "LA POSICION EN QUE SE ENCUENTRA ES: " << found+1 << '\n';
    }
}

