/*
Date: 28/09/2022
Date last modification: 28/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Exercise Unit 2
*/

/*
Escribir un programa para una empresa que tiene salas de juegos para todas las edades y quiere calcular de forma automática el precio que debe cobrar a sus clientes
por entrar. El programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si
el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5 y si es mayor de 18 años, $10.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int edad;
    int precio;

    // Input
    cout << "Ingresa tu edad: " << endl;
    cin >> edad;

    // Processing
    if (edad > 1)
    {
        if ((edad < 4) || (edad >= 4 && edad <= 18) || (edad > 18))
        {
            if (edad < 4)
            {
                precio = 0;
            }
            else if (edad >= 4 && edad <= 18)
            {
                precio = 5;
            }
            else if (edad > 18)
            {
                precio = 10;
            }


            //Output
            cout << "El precio a pagar es: "
                 << "$" << precio << endl;
        }
    }else{
        cout << "La edad ingresada es incorrecta" << endl;
    }



    return 0;
}