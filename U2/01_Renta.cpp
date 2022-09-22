/*
Date: 12/09/2022 
Date last modification: 12/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: First exercise Unit 2 
*/


/*
Los tramos impositivos para la declaración de la renta en un determinado país son los siguientes:

Renta	Tipo impositivo
Menos de $10,000	5%
Entre $10,000 y $20,000	15%
Entre $20,000 y $35,000	20%
Entre $35,000 y $60,000	30%
Más de $60,000	45%
Escribir un programa que pregunte al usuario su renta anual y muestre por 
pantalla el tipo impositivo que le corresponde.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

// Se usa float por que se realiza divisiones en el impuesto
int main (){
    float renta;
    float descuento5;
    float descuento15;
    float descuento20;
    float descuento30;
    float descuento45;
    float impuesto1;

    cout << "Ingresa tu renta anual: \n";
    cin >> renta;
    
   
        if (renta < 10000){
            descuento5 = renta*.05;
            impuesto1 = (descuento5/renta)*100;
            cout << "* Su impuesto es del: " << impuesto1 << "%" << endl;
            cout << "* Debe pagar: " << "$" << descuento5 << endl; 
        }

        if(renta >= 10000 & renta < 20000){
            descuento15 = renta*.15;
            impuesto1 = (descuento15/renta)*100;
            cout << "* Su impuesto es del: " << impuesto1 << "%" << endl;
            cout << "* Debe pagar: " << "$" << descuento15 << endl;
        }

        if(renta >= 20000 & renta < 35000){
            descuento20 = renta*.20;
            impuesto1 = (descuento20/renta)*100;
            cout << "* Su impuesto es del: " << impuesto1 << "%" << endl;
            cout << "* Debe pagar: " << "$" << descuento20 << endl;
        }

        if(renta >= 35000 & renta <= 60000){
            descuento30 = renta*.30;
            impuesto1 = (descuento30/renta)*100;
            cout << "* Su impuesto es del: " << impuesto1 << "%" << endl;
            cout << "* Debe pagar: " << "$" << descuento30 << endl;
        }

        if(renta > 60000) {
            descuento45 = renta*.05;
            impuesto1 = (descuento45/renta)*100;
            cout << "* Su impuesto es del: " << impuesto1 << "%" << endl;
            cout << "* Debe pagar: " << "$" << descuento45 << endl;
        }


    

    return 0;
}