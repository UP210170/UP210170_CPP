/*
Date: 26/09/2022 
Date last modification: 26/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Exercise Unit 2 
*/


/* 
En una determinada empresa, sus empleados son evaluados al final de cada año. 
Los puntos que pueden obtener en la evaluación comienzan en 0.0 y pueden ir aumentando, 
traduciéndose en mejores beneficios. Los puntos que pueden conseguir 
los empleados pueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios 
entre las cifras mencionadas. A continuación se muestra una tabla con los 
niveles correspondientes a cada puntuación. La cantidad de dinero conseguida
en cada nivel es de $2,400 multiplicada por la puntuación del nivel.

Nivel	Puntuación
Inaceptable	0.0
Aceptable	0.4
Meritorio	0.6 o más
Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento, 
así como la cantidad de dinero que recibirá el usuario.
*¡Muchas gracias por preferirnos! Esperamos poder servirte nuevamente.
*/


#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double puntuacion;
    double sueldo1;

    //request his annual score 
    cout << "Enter your score for the year: " << endl;
    cin >> puntuacion;

    //Operation for salary 
    sueldo1 = puntuacion * 2400;

    //Processing
    if(puntuacion <= 1){
         if((puntuacion == 0.4) || (puntuacion >= 0.6) || (puntuacion == 0.0)){

        //if de acorde al nivel ingresado
        if(puntuacion == 0.0){
            cout << "Your level of performance is Unacceptable" << endl;
        }
        else if(puntuacion == 0.4){
            cout << "Your level of performance is Acceptable" << endl;
        }
        else if(puntuacion >= 0.6){
            cout << "Your level of performance is Meritorious" << endl;
        }

        //Output
        cout << "Your final money is: " << "$" << sueldo1 << endl;
    }
        
    }else{
        cout << "The value your entered is incorrect" << endl;
    }
        
    return 0;
}
