//Resolucion recusiva de factorial 

#include <iostream>

using namespace std;

long long factorial(long long n)
 {
    if(n==1 || n==0)   // condici�n de parada
        return 1;
     return n * factorial(n - 1);   // Llamada recursiva a la funci�n y condici�n de parada
 }
 
 int main()
 {
    int n; 
    cin >> n; 
    cout<< "Factorial de  "<< n <<" es " << factorial(n) << endl;
    return 0;
 }
