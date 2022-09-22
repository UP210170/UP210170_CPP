/*
Date: 12/09/2022 
Date last modification: 12/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: First exercise Unit 2 
*/


#include <iostream>
#include <stdio.h>

using namespace std;


int main (){
    int renta;
    int descuento5;
    int descuento15;
    int descuento20;
    int descuento30;
    int descuento45;

    cout << "Ingresa tu renta anual: \n";
    cin >> renta;
    

    if (renta < 10000){
        cout << "* Su impuesto es del 5%" << endl;
        descuento5 = (5*renta)/100;
        cout << "* Debe pagar: " << "$" << descuento5 << endl; 
    }

    if(renta >= 10000 & renta < 20000){
       cout << "* Su impuesto es del 15% " << endl;
       descuento15 = (15*renta)/100;
       cout << "* Debe pagar: " << "$" << descuento15 << endl;
    }

    if(renta >= 20000 & renta < 35000){
        cout << "* Su impuesto es del 20% " << endl;
        descuento20 = (20*renta)/100;
        cout << "* Debe pagar: " << "$" << descuento20 << endl;
    }

    if(renta >= 35000 & renta <= 60000){
        cout << "* Su impuesto es del 30%" << endl;
        descuento30 = (30*renta)/100;
        cout << "* Debe pagar: " << "$" << descuento30 << endl;
    }

    if(renta > 60000) {
        cout << "* Su impuesto es del 45%" << endl;
        descuento45 = (45*renta)/100;
        cout << "* Debe pagar: " << "$" << descuento45 << endl;
    }


    return 0;
}