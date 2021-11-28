
// Este programa forma parte del tutorial de introducci�n al lenguaje C++


#include <iostream>

using namespace std;

float Suma(float x, float y)
{
    return x+y;
}

float Resta(float x, float y)
{
    return x-y;
}

float Producto(float x, float y)
{
    return x*y;
}

float Division(float x, float y)
{
    return x/y;
}

float Operacion(float x, float y, char operando)
{
    float resultado = 0;

    switch (operando)
    {
        case '+': {
            resultado = Suma(x, y);
            break;
        }
        case '-': {
            resultado = Resta(x, y);
            break;
        }
        case '*': {
            resultado = Producto(x, y);
            break;
        }
        case '/': {
            resultado = Division(x, y);
            break;
        }
    }

    return resultado;
}

int main()
{
    float operando1 = 0, operando2 = 0;
    char operador;

    cout << "Este programa realiza la operaci�n solicitada sobre 2 operandos" << endl << endl;
    cout << "Escribe el s�mbolo de la operaci�n que deseas realizar: + - * /" << endl;
    cin >> operador;
    cout << "Escribe el primero operando: ";
    cin >> operando1;
    cout << "Escribe el segundo operando: ";
    cin >> operando2;

    cout << "El resultado de " << operando1 << " " << operador << " " << operando2
                        << " = " << Operacion(operando1, operando2, operador) << endl;

    return 0;
}
