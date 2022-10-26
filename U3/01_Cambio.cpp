 /*
Date: 24/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Unit 3 
*/

#include <iostream>

using namespace std;

void obtenerCambio(int);
void imprimirCambio(string);


int quinientos = 0, docientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0; 

int main(){
    int dinero;

    cout << "Ingresa una cantidad de dinero: ";
    cin >> dinero;

    obtenerCambio(dinero);
    imprimirCambio("TOTAL");


   return 0;
}







void obtenerCambio(int dinero){
    while (dinero > 0)
    {
        (dinero >= 500) ? quinientos++, dinero -= 500 
                        : (dinero >= 200) ? docientos++, dinero -= 200 
                        : (dinero >= 100) ? cien++, dinero -= 100 
                        : (dinero >= 50) ? cincuenta++, dinero -= 50 
                        : (dinero >= 20) ? veinte++, dinero -= 20 
                        : (dinero >= 10) ? diez++, dinero -= 10 
                        : (dinero >= 5) ? cinco++, dinero -= 5 
                        : (dinero >= 2) ? dos++, dinero -= 2 
                        : (dinero >= 1) ? uno++, dinero -= 1 
                        : dinero; 
       
    }
}

void imprimirCambio(string dinero){
    cout << "EL cambio de dinero ingresado: " << dinero << endl;
    cout << "Billetes de $500: " << quinientos << endl;
    cout << "Billetes de $200: " << docientos << endl;
    cout << "Billetes de $100: " << cien << endl;
    cout << "Billetes de $50: " << cincuenta << endl;
    cout << "Billetes de $20: " << veinte << endl;
    cout << "Monedas de 10: " << diez << endl;
    cout << "Monedas de 5: " << cinco << endl;
    cout << "Monedas de 2: " << dos << endl;
    cout << "Monedas de 1: " << uno << endl;
}