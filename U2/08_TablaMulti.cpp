#include <iostream>
#include <stdio.h>


using namespace std;

int main (){
    int numero, i;
    int limite;

    cout << "Ingresa un limite para la tabla: ";
    cin >> limite;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    for (i = 1; i <= limite; i++){
        cout << numero << "x" << i << "=" << numero * i;
    }

    return 0;
}