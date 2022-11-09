/*
Date: 08/11/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Unit 3
*/

#include <iostream>

using namespace std;

void hacertablero();
char Gato[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool ComprobarJugada(int jugada);
int seleccionarJugada();
void colocarlajugada(int);
bool comprobarganador();

int row, col;
int turno = 1;
int ganador;


int main(){
    int jugada;
    bool juegoterminado = false;
    bool CasillaOcupada = true;
    char juego;
    char jugador1[20];
    char jugador2[20];


    cout << "Juego de Gato " << endl;
    cout << "Presione Y para jugar y N para salir: "; 
    cin >> juego;
    

    system("cls");

    cout << "Bienvenido Jugador 1 dame tu nombre: " << endl;
    cin >> jugador1;

    system("cls");

    cout << "Bienvenido Jugador 2 dame tu nombre: " << endl;
    cin >> jugador2;

    if(juego == 'Y' || juego == 'y'){
        do{
        system("cls");
        hacertablero();
        do{
            jugada = seleccionarJugada();
            CasillaOcupada = ComprobarJugada(jugada);
            if(CasillaOcupada == true){
                cout << "Otra Vez \n";
                hacertablero();
            }
        }while(CasillaOcupada == true);
        colocarlajugada(jugada);
    
       juegoterminado = comprobarganador();
      
    }while(juegoterminado == false and turno < 10);

    system("cls");
    hacertablero();

    if(juegoterminado == true){
        if((turno - 1) %2 == 0){
            cout << "Gano el jugador " << jugador2 << endl;
        }else{
            cout << "Gano el jugador " << jugador1 << endl;
        }
    }
    else{
            cout << "Empate";
        }
    }else{
        system("cls");
        cout << "El juego se termino";
    }
    

    return 0;
}

void hacertablero(){
    int row = 0;
    int col = 0;
    
    for(int fila = 0; fila < 6; fila++){
        for(int columna = 0; columna < 3; columna++){
            if(fila < 5 && fila % 2 == 1){
                cout << "___";
            }else{
                
                if(fila < 5){
                    cout << " " << Gato[row][col] << " ";
                    col++;
                }else{
                    cout << "   ";
                }
            }
            
            if(columna < 2){
                cout << "|";
            }
          
        }
        col = 0;
        if(fila % 2 == 0){
            row++;
        }
       
       cout << endl;
    }
    
}

bool ComprobarJugada(int jugada){
    if(jugada == 1){
        row = 0;
        col = 0;
    }else if(jugada == 2){
        row = 0;
        col = 1;
    }else if(jugada == 3){
        row = 0;
        col = 2;
    }else if(jugada == 4){
        row = 1;
        col = 0;
    }else if(jugada == 5){
        row = 1;
        col = 1;
    }else if(jugada == 6){
        row = 1;
        col = 2;
    }else if(jugada == 7){
        row = 2;
        col = 0;
    }else if(jugada == 8){
        row = 2;
        col = 1;
    }else if(jugada == 9){
        row = 2;
        col = 2;
    }
    if(Gato[row][col] == 'O' || Gato[row][col] == 'X'){
        return true;
    }else{
        return false;
    }
}

int seleccionarJugada(){
    int jugada;

    cout << "OPCIONES DE JUEGO" << endl;

    for(int fila = 0; fila < 3; fila++){
        for(int columna = 0; columna < 3; columna++){
            cout << "[" << fila << ", " << columna << "]";
            cout << endl;
        }
    }

   do{
     cout << "Dame tu jugada: ";
     cin >> jugada;  
   }while(jugada > 9 && jugada < 0);
   return jugada; 

}

void colocarlajugada(int jugada){
    char seleccionJugada;
    if(turno % 2 == 0){
        seleccionJugada = 'O';
    }else{
        seleccionJugada = 'X';
    }

    if(jugada == 1){
        Gato[0][0] = seleccionJugada;
    }else if(jugada == 2){
        Gato[0][1] = seleccionJugada;
    }else if(jugada == 3){
        Gato[0][2] = seleccionJugada;
    }else if(jugada == 4){
        Gato[1][0] = seleccionJugada;
    }else if(jugada == 5){
        Gato[1][1] = seleccionJugada;
    }else if(jugada == 6){
        Gato[1][2] = seleccionJugada;
    }else if(jugada == 7){
        Gato[2][0] = seleccionJugada;
    }else if(jugada == 8){
        Gato[2][1] = seleccionJugada;
    }else if(jugada == 9){
        Gato[2][2] = seleccionJugada;
    }
    turno++;
}

bool comprobarganador(){
    bool ganar = false;
     if(Gato[0][0] == 'X' && Gato[0][0] == Gato[0][1] && Gato[0][0] == Gato[0][2]
    || Gato[1][0] == 'X' && Gato[1][0] == Gato[1][1] && Gato[1][0] == Gato[1][2]
    || Gato[2][0] == 'X' && Gato[2][0] == Gato[2][1] && Gato[2][0] == Gato[2][2]
    
    || Gato[0][0] == 'X' && Gato[0][0] == Gato[1][0] && Gato[0][0] == Gato[2][0]
    || Gato[0][1] == 'X' && Gato[0][1] == Gato[1][1] && Gato[0][1] == Gato[2][1]
    || Gato[0][2] == 'X' && Gato[0][2] == Gato[1][2] && Gato[0][2] == Gato[2][2]
    
    || Gato[0][0] == 'X' && Gato[0][0] == Gato[1][1] && Gato[0][0] == Gato[2][2]
    || Gato[0][2] == 'X' && Gato[0][2] == Gato[1][1] && Gato[0][2] == Gato[2][0]){
            ganar = true;
    }
    if(Gato[0][0] == 'O' && Gato[0][0] == Gato[0][1] && Gato[0][0] == Gato[0][2]
    || Gato[1][0] == 'O' && Gato[1][0] == Gato[1][1] && Gato[1][0] == Gato[1][2]
    || Gato[2][0] == 'O' && Gato[2][0] == Gato[2][1] && Gato[2][0] == Gato[2][2]
    
    || Gato[0][0] == 'O' && Gato[0][0] == Gato[1][0] && Gato[0][0] == Gato[2][0]
    || Gato[0][1] == 'O' && Gato[0][1] == Gato[1][1] && Gato[0][1] == Gato[2][1]
    || Gato[0][2] == 'O' && Gato[0][2] == Gato[1][2] && Gato[0][2] == Gato[2][2]
    
    || Gato[0][0] == 'O' && Gato[0][0] == Gato[1][1] && Gato[0][0] == Gato[2][2]
    || Gato[0][2] == 'O' && Gato[0][2] == Gato[1][1] && Gato[0][2] == Gato[2][0]){
        ganar = true;
    }
     

    return ganar;

}
