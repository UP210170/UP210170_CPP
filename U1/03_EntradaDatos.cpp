/*
Date: 21/09/2022 
Date last modification: 21/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: My third program in C++
*/


//Libreria para manejo de entradas y salida de pantalla
#include <iostream>
//Libreria para el uso de printf y scanf
#include <stdio.h>


using namespace std;

int main(){
    int entero; 
    float flotante;
    char caracter;
    double grande;
    int numero;

    printf("\n\nPrueba 1 con cout y printf\n\n");
    cout << "Este programa muestra el ingreso de datos por parte del usuario \n";
    cout << "Ingresa un dato de tipo entero: \n";
    cin >> entero;
    cout << "El dato ingresado es: " << entero << endl;

    cout << "==================" << endl;

    cout << "Ingresa un dato de tipo flotante: \n";
    cin >> flotante;
    cout << "El dato ingresado es: " << flotante << endl;

    cout << "==================" << endl;

    cout << "Ingresa un dato de tipo double: \n";
    cin >> grande;
    cout << "El dato ingresado es: " << grande << endl;

    cout << "=================" << endl;

    cout << "Ingresa un dato de tipo char: \n";
    cin >> caracter;
    cout << "El dato ingresado es: " << caracter << endl;

    printf("===================");
    
  
    printf("Usando printf y scanf");
    printf("Dame un número: ");
    scanf("%d", &numero);
    printf("La guardado es: %d", numero);


return 0;
}