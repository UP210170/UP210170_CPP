#include <iostream>
#include <cmath>

using namespace std;

float plantearecuacion (float valor){
    //Con la ecuación: x² + 3x + 8
    return pow(valor, 2) + - 1 * (pow(valor, 1)) - 12;
}

int main (){
    float a;
    float b;
    float interador = 1;
    float ya = plantearecuacion (a);
    float yb = plantearecuacion (b);
    float c = (a+b)/2;
    float yc = plantearecuacion (c);
    

    cout << "Ingresa el valor de a: ";
    cin >> a;

    cout << "Ingresa el valor de b: ";
    cin >> b;

    while (yc >= 0.01 || yc <= -0.01){
        cout << "| i |     a    |     b     |     ya     |     yb       |       c       |      yc      |\n";

        cout << interador << a << b << ya << yb << c << yc;
        interador++;
        

    }
}