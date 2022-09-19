/*
Date: 18/09/2022 
Date last modification: 18/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: My second program in C++
*/


// ------------ PREPOCESSOR DIRECTIVES --------------
// INPUT / OUTPUT LIBRARY BETWEEN THE SCREEM AND KEYBOARD
 

 //Libreria para manejo de entradas y salida de pantalla
#include <iostream>
//Libreria para el uso de printf y scanf
#include <stdio.h>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main()
{
    //Mas información en:
    //https://www.geeksforgeeks.org/c-data-types/
    int entero = 4;
    float flotante = 2.565465654654;
    double grande = 2.565465654654;
    char caracter = 64;
    
    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El número entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << "bytes" << endl;
    cout << "El número flotante es: " << flotante << endl;
    cout << "El tamaño del flotante es: " << sizeof(flotante)<< "bytes" << endl;
    cout << "El número double es: " << grande << endl;
    cout << "El tamaño del double es: " << sizeof(grande)<< "bytes" << endl;
    cout << "El caracter char es: " << caracter << endl;
    cout << "El tamaño del char es: " << sizeof(caracter)<< "byte" << endl;
    
    cout << "=================" << endl;

    //Mas información en:
    //https://cplusplus.com/reference/cstdio/printf/
    printf("Usando la función printf\n");
    printf("El número entero es: %i \n", entero);
    printf("El número flotante es: %3.1f \n", flotante);

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}