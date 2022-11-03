/*
Date: 29/10/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Unit 3
*/

#include <iostream>

using namespace std;


void hacerestructura();
void seleccionarJugada();
void convertirJugada(int jugada);
bool comprobarCasillaOcupada(int jugada);


char estructuraGato[3][3];
int fila;
int columna;
int main(){
    int jugada;
    bool casillaOcupada = true;
    estructuraGato[0][0];
    
    do{
        jugada = seleccionarJugada();
        casillaOcupada = comprobarCasillaOcupada(jugada);
        if(casillaOcupada == true){
            cout << "Otra Vez";
        }
    }while(casillaOcupada == true)
    
   
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

int seleccionarJugada(){
    int jugada;
    do{
        cout << "Dame tu jugada";
        cin >> jugada;
    }while(jugada <= 9 && jugada > 0);

    return jugada;
}

void convertirJugada(int jugada){
    if(jugada == 1){
        fila = 0;
        columna = 0;
    }else if(jugada == 2){
        fila = 0;
        columna = 1;
    }else if(jugada == 3){
        fila = 0;
        columna = 2;
    }else if(jugada == 4){
        fila = 1;
        columna = 0;
    }else if(jugada == 5){
        fila = 1;
        columna = 1;
    }else if(jugada == 6){
        fila = 1;
        columna = 2;
    }else if(jugada == 7){
        fila = 2;
        columna = 0;
    }else if(jugada == 8){
        fila = 2;
        columna = 1;
    }else if(jugada == 9){
        fila = 2;
        columna = 2;
    }
}


bool comprobarCasillaOcupada(int jugada){
    if(estructuraGato[fila][columna] == 'X' || estructuraGato[fila][columna] == 'O'){
        return true;
    }else{
        return false;
    }
}
