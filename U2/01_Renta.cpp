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
    float rent;
    float descuent5;
    float descuent15;
    float descuent20;
    float descuent30;
    float descuent45;
    float taxes1;
    
    //request for annual rent
    cout << "Enter your annual rent: \n";
    cin >> rent;
    
    if(rent > 0){
        if (rent < 10000){
            descuent5 = rent*.05;
            taxes1 = (descuent5/rent)*100;
            cout << "Your data is: " << endl;
            cout << "* Your annual rent is: " << rent << endl;
            cout << "* Your tax is: " << taxes1 << "%" << endl;
            cout << "* Must pay: " << "$" << descuent5 << endl; 
        }

        if(rent >= 10000 & rent < 20000){
            descuent15 = rent*.15;
            taxes1 = (descuent15/rent)*100;
            cout << "Your data is: " << endl;
            cout << "* Your annual rent is: " << rent << endl;
            cout << "* Your tax is: " << taxes1 << "%" << endl;
            cout << "* Must pay: " << "$" << descuent15 << endl; 
        }

        if(rent >= 20000 & rent < 35000){
            descuent20 = rent*.20;
            taxes1 = (descuent20/rent)*100;
            cout << "Your data is: " << endl;
            cout << "* Your annual rent is: " << rent << endl;
            cout << "* Your tax is: " << taxes1 << "%" << endl;
            cout << "* Must pay: " << "$" << descuent20 << endl; 
        }

        if(rent >= 35000 & rent < 60000){
            descuent30 = rent*.30;
            taxes1 = (descuent30/rent)*100;
            cout << "Your data is: " << endl;
            cout << "* Your annual rent is: " << rent << endl;
            cout << "* Your tax is: " << taxes1 << "%" << endl;
            cout << "* Must pay: " << "$" << descuent30 << endl; 
        }

        if(rent >= 60000) {
            descuent45 = rent*.05;
            taxes1 = (descuent45/rent)*100;
            cout << "Your data is: " << endl;
            cout << "* Your annual rent is: " << rent << endl;
            cout << "* Your tax is: " << taxes1 << "%" << endl;
            cout << "* Must pay: " << "$" << descuent45 << endl; 
        }
    }else {
        cout << "The data you entered is incorrect" << endl;
    }
        
    return 0;
}