/*
Date: 29/10/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Unit 3
*/

#include <iostream>

using namespace std;


void hacerestructura();
char estructuraGato[3][3];

int main(){
    estructuraGato[0][0] = 'X';
    hacerestructura();
   
    return 0;
}

void hacerestructura (){
    for(int fila = 0; fila < 6; fila++){
        for(int columna = 0; columna < 3; columna++){

            if(fila < 5 && fila%2 == 1){
                cout << "___";
            }else{
                if(fila < 5){
                    cout << " " << estructuraGato[0][0] << " ";
                }else{
                    cout << "   ";
                }
            }

            if(columna < 2){
                cout << "|";
            }
        }
        cout << endl;
    }

}