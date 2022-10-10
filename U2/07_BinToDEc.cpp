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
 
    cout << "Decimal to binary conversion program" << endl;
    cout << "Enter the decimal number: ";
    cin >> deci;

    if(deci < 0){
        cout << "Must be greater than 0" << endl;
    }

    do
    {
       
        if (deci > 0)
        {
            while(deci != 0){
                /*resultado = to_string(deci%2) + resultado;*/
                resultado = (deci%2 == 0)?"0" + resultado : "1" + resultado;
                deci /= 2;
            }
         cout << "The binary number is: " << resultado << endl;
        }
        else if (deci == 0)
        {
            cout << "0" << endl;
        }
    }while(deci < 0);

    return 0;
}
