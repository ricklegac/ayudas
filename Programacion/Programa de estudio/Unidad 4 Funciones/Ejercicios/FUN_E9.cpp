// Se ilustra la sobrecarga de funciones para el calculo del area de un triangulo


#include <iostream>
#include <cmath>
using namespace std; 

double trianguloarea(double);
double trianguloarea(double, double);
double trianguloarea(double, double, double);

int main()
{

    // El número de parámetros que pasamos determinar el tipo de triángulo que
    // calculamos, 1 parámetro = Equilátero, 2 parámetros = isóceles
    // 3 parámetros = escaleno.
    
    double a = 2;
    double b = 4;
    double c = 5;

    cout << "Triangulo. Lado = " << a << " :" << trianguloarea(a) << endl;
    cout << "Triangulo. Lado = " << a << ", Base = : " << b << " :" << trianguloarea(a, b) << endl;
    cout << "Triangulo. Lado 1 = " << a << ", Lado 2 = " << b << ", Lado 3 = " 
    << c << " :" << trianguloarea(a, b, c) << endl;
    return 0;
}

double trianguloarea(double a)
//  area = ( (sqrt(3)/4) * (a * a) )
{
    cout << "Calculando area de triangulo equilatero: " << endl;
    return ( (sqrt(3)/4) * (a * a) );
}

double trianguloarea(double a, double b)
{
    cout << "Calculando area de triangulo isoceles: " << endl;
    return (b * (sqrt ((a * a) - ( (b * b) / 4 ) ) ) ) / 2;
}

double trianguloarea(double a, double b, double c)
{
    double p;
    
    p = ( (a + b + c) / 2 ); 
    cout << "Calculando area de triangulo escaleno: " << endl;
    return sqrt( (p* (p - a) * (p - b) * (p - c)) );
}
