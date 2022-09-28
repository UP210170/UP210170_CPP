/*
Date: 12/09/2022 
Date last modification: 25/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Exercise Unit 2 
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
    float rent;
    float descuento;
    float taxes1;
    
    //request for annual rent
    cout << "Enter your annual rent: \n";
    cin >> rent;

    

    //Processing 
    if(rent > 0){
        if((rent < 10000) || (rent >=10000 & rent < 20000) || (rent >= 20000 & rent < 35000) || (rent >= 35000 & rent < 60000) || (rent >= 60000)){
        if (rent < 10000){
            descuento = rent*.05;
        }

        if(rent >= 10000 & rent < 20000){
            descuento = rent*.15;
        }

        if(rent >= 20000 & rent < 35000){
            descuento = rent*.20;
        }

        if(rent >= 35000 & rent < 60000){
            descuento = rent*.30;
        }

        if(rent >= 60000) {
            descuento = rent*.45;
        }
        }

        taxes1 = (descuento/rent)*100;
        
        //Data output
        cout << "Your data is: " << endl;
        cout << "* Your annual rent is: " << "$" << rent << endl;
        cout << "* Your tax is: " << taxes1 << "%" << endl;
        cout << "* Must pay: " << "$" << descuento << endl;

    }else {
        cout << "The data you entered is incorrect" << endl;
    }
        
    return 0;
}