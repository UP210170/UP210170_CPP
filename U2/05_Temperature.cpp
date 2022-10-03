#include <iostream>

//Hacer un programa en el que ingresen 6 temperaturas y determine el promedio, la más baja y más alta

using namespace std;

int main (){
    int contador = 1;
    float temperatura;
    float tempAcum = 0;
    int high = -100, drop = 100000;

    //Processing
    do{
        //Input
        cout << "Give me the temperature: " << endl;
        cin >> temperatura;
        tempAcum += temperatura;

        if(temperatura < drop){
            drop = temperatura;
        }
        if(temperatura > high){
            high = temperatura; 
        }

        contador++;
    } while (contador <= 6);

    //Output
    cout << "The average of temperature today is: " << tempAcum/6 << endl;
    cout << "The highest temperature is: " << high << endl;
    cout << "The lower temperature is: " << drop << endl;

    return 0;
}