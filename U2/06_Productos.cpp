/*
Date: 05510/2022
Date last modification: 05/10/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Exercise Unit 2
*/

/*Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final
indique el total de la factura. Para saber que se ha terminado con la compra, se deberá ingresar un 0 en la cantidad*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int amount, price;
    int total=0;
    
    //Processing
    do{
        //Input 
        cout << "Enter number of products: ";
        cin >> amount;

        if(amount != 0){
            cout << "Price of the product: " << "$";
            cin >> price;

            total = amount * price + total;
        }
        
    }while(amount != 0);

    //Output
    cout << "The total invoice to pay is: " << "$" << total << endl;
   

    return 0;
}