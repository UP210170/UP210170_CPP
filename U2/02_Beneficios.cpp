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
    cout << "Ingresa tu puntuación del año: " << endl;
    cin >> puntuacion;

    //Operación para obtener el sueldo
    sueldo1 = puntuacion * 2400;

    //If pirncipal para ver si el dato es correcto y entrar dentro de el 

    if(puntuacion <= 1){
         if((puntuacion == 0.4) || (puntuacion >= 0.6) || (puntuacion == 0.0)){

        //if de acorde al nivel ingresado
        if(puntuacion == 0.0){
            cout << "Tu nivel de desempeño es Inaceptable" << endl;
        }
        else if(puntuacion == 0.4){
            cout << "Tu nivel de desempeño es Aceptable" << endl;
        }
        else if(puntuacion >= 0.6){
            cout << "Tu nivel de desempeño es Meritorio" << endl;
        }

        //Mensaje del dinero final por su desempeño
        cout << "Tu dinero final es: " << "$" << sueldo1 << endl;
    }
        
    }else{
        cout << "El valor que ingreso es incorrecto" << endl;
    }
        
    return 0;
}
