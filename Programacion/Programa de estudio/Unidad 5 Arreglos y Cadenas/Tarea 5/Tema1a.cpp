 #include <iostream>
 using namespace std;


int main() {
    int i,aux,j;
    int v[7]; 
    //int v[7] = {10, 20, 30, 40, 50, 60, 70};
    
  
    // Ingresa los datos por teclado
    cout << endl << "Ingrese los valores del vector " << endl ;
    for(int i=0;i<7;i++){
        cout  << "Valor " << i+1 <<": ";
        cin >> v[i];
        }
       
  
    j=6;    
    for(int i=0; i<4;i++){   
    	aux = v[i]; 
    	v[i] = v[j];
    	v[j] = aux;
    	j=j-1; 
	}
	cout << endl << "El vector resultante es: "	<< endl; 
    for(int i=0; i<7;i++){ 
	   cout << v[i]  << "\t"; 
	}	
       return 0;
}
