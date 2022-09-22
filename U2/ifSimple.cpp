/*
Date: 22/09/2022 
Date last modification: 22/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: My four program in C++
*/


#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int numero;
    int dato = 1;
    int operacion;
     
    cout << "Selecciona una opción: \n"; 
    cout << "Operacion 1: == \n";
    cout << "Operacion 2: != \n";
    cout << "Operacion 3: < \n";
    cout << "Operacion 4: > \n";
    cout << "Operacion 5: <= \n";
    cout << "Operacion 6: >= \n";
    cin >> operacion;

   
    
    switch  (operacion){
    case 1: 
    cout << "Ingresa un número entero: \n";
    cin >> numero;

    if (numero == dato) {
        cout << "El número es igual a dato" << endl;
    }
    break;


    case 2: 
    cout << "Ingresa un número entero: \n";
    cin >> numero;

    if (numero != dato){
        cout << "El número es diferente a dato";
    }
    break;


    case 3:
    cout << "Ingresa un número entero: \n";
    cin >> numero;

    if(numero < dato){
        cout << "El número es menor al dato";
    }
    break;

    case 4:
    cout << "Ingresa un número entero: \n";
    cin >> numero;

    if(numero > dato){
        cout << "El número es mayor al dato";
    }
    break;

    case 5:
    cout << "Ingresa un número entero: \n";
    cin >> numero;

    if(numero <= dato){
        cout << "El número es menor o igual al dato";
    }
    break;

    case 6:
    cout << "Ingresa un número entero: \n";
    cin >> numero;

    if(numero >= dato){
        cout << "El número es mayor o igual al dato";
    }
    break;

    
    default:
    cout << "No ingreso una operación";
  

    }



    return 0;
}
