/*
Date: 05/10/2022
Date last modification: 08/10/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Exercise Unit 2
*/


#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int deci;
    string resultado;
 
    cout << "Programa de conversión de Decimal a Binario" << endl;
    cout << "Ingresa el número decimal: ";
    cin >> deci;

    do
    {
        if (deci > 0)
        {
            while(deci != 0){
                if(deci % 2 == 0){
                    resultado = "0" + resultado;
                }else{
                    resultado = "1" + resultado;
                }
                deci /= 2;
            }
         cout << "El número binario es: " << resultado << endl;
        }
        else if (deci == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "Debe ser mayor a cero" << endl;
        }
    }while(deci < 0);

    return 0;
}