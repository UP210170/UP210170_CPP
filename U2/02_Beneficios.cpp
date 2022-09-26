/*
Date: 26/09/2022 
Date last modification: 26/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Exercise Unit 2 
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    double puntuacion;
    double sueldo1;

    
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
