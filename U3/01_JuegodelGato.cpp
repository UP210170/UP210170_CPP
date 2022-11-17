/*
Date: 09/11/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Unit 3
*/

#include <iostream>
#include <time.h>

using namespace std;


char Cat[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char Gatoima[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void make_board();

bool Check_play(int Move);
/*
Function visualize the move on the indicated board
Params: value of jugada 1 - 9
Return: True if the place is occupied
        False if the place not is not occupied
*/

bool Check_playima(int Move);
/*
Function visualize the move on the indicated imaginary board
Params: Value of jugada 1 - 9
Return: True if the place is occupied
        False if the place not is not occupied
*/

int Choose_play();
/*
Function show the possible moves and shows the name of the player in turn and calls for the play
Params: Value of jugada 1 - 9
Return: The jugada
*/

void Place_play(int);
/*
Function the move is placed on the board
Params: The value of jugada 1 - 9
*/

void Place_playima(int);
/*
Function the move is placed on the imaginary board
Params: Value of jugada 1 - 9
*/

bool Check_win();
/*
Function to check if that move wins the game on the real board
Params: The type of board on which it is played
Return: True if you win
        False if you still don't win
*/

bool Check_winima(int);
/*
Function to check if that move wins the game on the imaginary board
Params: The type of board on which it is played
Return: True if you win
        False if you still don't win
*/

int CPU();
/*
Function to get the move of the CPU
Return: Value of jugada 1 - 9
*/

int The_best_move(char);
/*
Function to obtain the best play of a certain player
Params: The type of player
Return: Value of jugada 1 - 9
*/

int Choose_playima();
/*
Function shows the possible moves and displays the player's name and CPU in turn and calls for the move.
Params: Value of jugada 1 - 9
Return: The jugada
*/

void Clone_array();
/*
Function to clone the Gato array in Gatoima
*/


//Declaration of global variables
char Player1[20];
char Player2[20];
char Player3[20];
string Player_CPU = "CPU";
int row, col;
int Turn = 1;
int win;
const char Humano = 'O';
const char PC = 'X';
const string Tablero = "REAL";
const string Tableroimaginario = "IMAGINARIO";



int main(){
    //Declaration of variables 
    int Move;
    bool Game_over = false;
    bool Section_occupied = true;
    char Game;
    int Type_Game;

    //Ask the user if you want to play
    cout << "Tic Tac Toe" << endl;
    cout << "Press Y to play and N to exit: ";
    cin >> Game;


    if (Game == 'Y' || Game == 'y')
    {
        system("cls");
        //Ask the user which game mode he is going to play
        cout << "Choose a game mode (1. Multiplayer 2. VS CPU): ";
        cin >> Type_Game;

        //Enter 1 player mode
        if (Type_Game == 1)
        {
            system("cls");
            //Ask the names of player´s
            cout << "Welcome Player 1 - What is your name? " << endl;
            cin >> Player1;

            system("cls");

            cout << "Welcome Player 2 - What is your name? " << endl;
            cin >> Player2;

            do
            {
                system("cls");
                make_board();
                do
                {
                    Move = Choose_play();
                    Section_occupied = Check_play(Move);
                    if (Section_occupied == true)
                    {
                        system("cls");
                        cout << "Try again \n";
                        make_board();
                    }
                } while (Section_occupied == true);

                Place_play(Move);

                Game_over = Check_win();

            } while (Game_over == false && Turn < 10);

            system("cls");
            make_board();

            if (Game_over == true)
            {
                if ((Turn - 1) % 2 == 0)
                {
                    cout << "Win the player " << Player2;
                    cout << "\n";
                }
                else
                {
                    cout << "Win the player " << Player1;
                    cout << "\n";
                }
            }
            else
            {
                cout << "Tie";
            }
        }
        //Enter 2 player mode
        else if (Type_Game == 2)
        {

            system("cls");

            cout << "Welcome Player 1 - What is your name? " << endl;
            cin >> Player3;

            do
            {
                system("cls");
                make_board();

                do
                {
                    if ((Turn - 1) % 2 == 0)
                    {
                        Move = Choose_playima();
                    }
                    else
                    {
                        Move = CPU();
                    }

                    Section_occupied = Check_play(Move);

                    if (Section_occupied == true)
                    {
                        system("cls");
                        cout << "Try again \n";
                        make_board();
                    }
                } while (Section_occupied == true);

                Place_play(Move);

                Game_over = Check_win();

            } while (Game_over == false and Turn < 10);

            system("cls");
            make_board();

            if (Game_over == true)
            {
                if ((Turn - 1) % 2 == 0)
                {
                    cout << "Win the "
                         << "\033[0;31m" << Player_CPU << "\033[0m";
                    cout << "\n";
                }
                else
                {
                    cout << "Win the player "
                         << "\033[1;34m" << Player3 << "\033[0m";
                    cout << "\n";
                }
            }
            else
            {
                cout << "Tie";
            }
        }
    }

    else
    {
        system("cls");
        cout << "The Game is Over" << endl;
    }

    return 0;
}

void make_board(){
    int row = 0;
    int col = 0;
    
    for(int fila = 0; fila < 6; fila++){
        for(int columna = 0; columna < 3; columna++){
            if(fila < 5 && fila % 2 == 1){
                cout << "___";
            }else{
                if(fila < 5){
                    if(Cat[row][col] == 'X'){
                        cout << "\033[1;34m" << " " << Cat[row][col] << " " << "\033[0m";
                    }else if(Cat[row][col] == 'O'){
                        cout << "\033[0;31m" << " " << Cat[row][col] << " " << "\033[0m";
                    }
                    else{
                        cout << " " << Cat[row][col] << " ";
                    }
                    
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

bool Check_play(int Move){
    if(Move == 1){
        row = 0;
        col = 0;
    }else if(Move == 2){
        row = 0;
        col = 1;
    }else if(Move == 3){
        row = 0;
        col = 2;
    }else if(Move == 4){
        row = 1;
        col = 0;
    }else if(Move == 5){
        row = 1;
        col = 1;
    }else if(Move == 6){
        row = 1;
        col = 2;
    }else if(Move == 7){
        row = 2;
        col = 0;
    }else if(Move == 8){
        row = 2;
        col = 1;
    }else if(Move == 9){
        row = 2;
        col = 2;
    }
    if(Cat[row][col] == 'O' || Cat[row][col] == 'X'){
        return true;
    }else{
        return false;
    }
}

int Choose_play(){
    int Move;
    int contador = 0;
    string opciones = "123456789";
    cout << "GAME OPTIONS" << endl;

    for(int fila = 0; fila < 3; fila++){
        for(int columna = 0; columna < 3; columna++){
            cout << opciones[contador] << " [" << fila << ", " << columna << "]";
            contador++;
            cout << endl;
        }
    }

    do{
    if((Turn - 1) % 2 == 0){
        cout << "The Turn is: " << Player1;
        cout << "\n";
    }else{
        cout << "The Turn is: " << Player2;
        cout << "\n";
    }
     cout << "Give me your move (from 1 to 9): ";
     cin >> Move;  
   }while(Move > 9 && Move < 0);
   return Move; 

}

int Choose_playima(){
    int Move;
    int contador = 0;
    string opciones = "123456789";
    cout << "GAME OPTIONS" << endl;

    for(int fila = 0; fila < 3; fila++){
        for(int columna = 0; columna < 3; columna++){
            cout << opciones[contador] << " [" << fila << ", " << columna << "]";
            contador++;
            cout << endl;
        }
    }

    do{
    if((Turn - 1) % 2 == 0){
        cout << "The Turn is: " << Player3;
        cout << "\n";
    }else{
        cout << "The Turn is: " << Player_CPU;
        cout << "\n";
    }
        cout << "Give me your move (from 1 to 9): ";
        cin >> Move;  
   }while(Move > 9 && Move < 0);
   return Move; 

}

void Place_play(int Move){
    char seleccionJugada;
    if(Turn % 2 == 0){
        seleccionJugada = 'O';
    }else{
        seleccionJugada = 'X';
    }

    if(Move == 1){
        Cat[0][0] = seleccionJugada;
    }else if(Move == 2){
        Cat[0][1] = seleccionJugada;
    }else if(Move == 3){
        Cat[0][2] = seleccionJugada;
    }else if(Move == 4){
        Cat[1][0] = seleccionJugada;
    }else if(Move == 5){
        Cat[1][1] = seleccionJugada;
    }else if(Move == 6){
        Cat[1][2] = seleccionJugada;
    }else if(Move == 7){
        Cat[2][0] = seleccionJugada;
    }else if(Move == 8){
        Cat[2][1] = seleccionJugada;
    }else if(Move == 9){
        Cat[2][2] = seleccionJugada;
    }
    Turn++;
}

bool Check_win(){
    bool ganar = false;
    if(Cat[0][0] == 'X' && Cat[0][0] == Cat[0][1] && Cat[0][0] == Cat[0][2]
    || Cat[1][0] == 'X' && Cat[1][0] == Cat[1][1] && Cat[1][0] == Cat[1][2]
    || Cat[2][0] == 'X' && Cat[2][0] == Cat[2][1] && Cat[2][0] == Cat[2][2]
    
    || Cat[0][0] == 'X' && Cat[0][0] == Cat[1][0] && Cat[0][0] == Cat[2][0]
    || Cat[0][1] == 'X' && Cat[0][1] == Cat[1][1] && Cat[0][1] == Cat[2][1]
    || Cat[0][2] == 'X' && Cat[0][2] == Cat[1][2] && Cat[0][2] == Cat[2][2]
    
    || Cat[0][0] == 'X' && Cat[0][0] == Cat[1][1] && Cat[0][0] == Cat[2][2]
    || Cat[0][2] == 'X' && Cat[0][2] == Cat[1][1] && Cat[0][2] == Cat[2][0]){
            ganar = true;
    }
    if(Cat[0][0] == 'O' && Cat[0][0] == Cat[0][1] && Cat[0][0] == Cat[0][2]
    || Cat[1][0] == 'O' && Cat[1][0] == Cat[1][1] && Cat[1][0] == Cat[1][2]
    || Cat[2][0] == 'O' && Cat[2][0] == Cat[2][1] && Cat[2][0] == Cat[2][2]
    
    || Cat[0][0] == 'O' && Cat[0][0] == Cat[1][0] && Cat[0][0] == Cat[2][0]
    || Cat[0][1] == 'O' && Cat[0][1] == Cat[1][1] && Cat[0][1] == Cat[2][1]
    || Cat[0][2] == 'O' && Cat[0][2] == Cat[1][2] && Cat[0][2] == Cat[2][2]
    
    || Cat[0][0] == 'O' && Cat[0][0] == Cat[1][1] && Cat[0][0] == Cat[2][2]
    || Cat[0][2] == 'O' && Cat[0][2] == Cat[1][1] && Cat[0][2] == Cat[2][0]){
        ganar = true;
    }

    return ganar;
}

//Functions smart cpu

void Clone_array(){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            Gatoima[row][col] = Cat[row][col];
        }
    }
}

int CPU(){
    int Move;
    bool section_occupied = true;
    srand(time(NULL));

    Move = The_best_move(PC);

    if(Move != -1){
        return Move;
    }

    Move = The_best_move(Humano);

    if(Move != -1){
        return Move;
    }

    do{
        Move = 1 + rand() % 9;
        section_occupied = Check_play(Move);
    }while(section_occupied == true);
    return Move;
}

bool Check_playima(int Move){
    if(Move == 1){
        row = 0;
        col = 0;
    }else if(Move == 2){
        row = 0;
        col = 1;
    }else if(Move == 3){
        row = 0;
        col = 2;
    }else if(Move == 4){
        row = 1;
        col = 0;
    }else if(Move == 5){
        row = 1;
        col = 1;
    }else if(Move == 6){
        row = 1;
        col = 2;
    }else if(Move == 7){
        row = 2;
        col = 0;
    }else if(Move == 8){
        row = 2;
        col = 1;
    }else if(Move == 9){
        row = 2;
        col = 2;
    }
    if(Gatoima[row][col] == 'O' || Gatoima[row][col] == 'X'){
        return true;
    }else{
        return false;
    }
}

bool Check_winima(int Move){
     bool ganar = false;
    if(Gatoima[0][0] == 'X' && (Gatoima[0][0] == Gatoima[0][1] || Gatoima[0][0] == Gatoima[0][2] ||  Gatoima[0][1] == Gatoima[0][2])
    || Gatoima[1][0] == 'X' && (Gatoima[1][0] == Gatoima[1][1] || Gatoima[1][0] == Gatoima[1][2] ||  Gatoima[1][1] == Gatoima[1][2])
    || Gatoima[2][0] == 'X' && (Gatoima[2][0] == Gatoima[2][1] || Gatoima[2][0] == Gatoima[2][2] ||  Gatoima[2][1] == Gatoima[2][2])
    
    || Gatoima[0][0] == 'X' && (Gatoima[0][0] == Gatoima[1][0] || Gatoima[0][0] == Gatoima[2][0] ||  Gatoima[1][0] == Gatoima[2][0])
    || Gatoima[0][1] == 'X' && (Gatoima[0][1] == Gatoima[1][1] || Gatoima[0][1] == Gatoima[2][1] ||  Gatoima[1][1] == Gatoima[2][1])
    || Gatoima[0][2] == 'X' && (Gatoima[0][2] == Gatoima[1][2] || Gatoima[0][2] == Gatoima[2][2] ||  Gatoima[1][2] == Gatoima[2][2])
    
    || Gatoima[0][0] == 'X' && (Gatoima[0][0] == Gatoima[1][1] || Gatoima[0][0] == Gatoima[2][2] ||  Gatoima[1][1] == Gatoima[2][2])
    || Gatoima[0][2] == 'X' && (Gatoima[0][2] == Gatoima[1][1] || Gatoima[0][2] == Gatoima[2][0] ||  Gatoima[1][1] == Gatoima[2][0])){
            ganar = true;
    }
    if(Gatoima[0][0] == 'O' && (Gatoima[0][0] == Gatoima[0][1] || Gatoima[0][0] == Gatoima[0][2] ||  Gatoima[0][1] == Gatoima[0][2])
    || Gatoima[1][0] == 'O' && (Gatoima[1][0] == Gatoima[1][1] || Gatoima[1][0] == Gatoima[1][2] ||  Gatoima[1][1] == Gatoima[1][2])
    || Gatoima[2][0] == 'O' && (Gatoima[2][0] == Gatoima[2][1] || Gatoima[2][0] == Gatoima[2][2] ||  Gatoima[2][1] == Gatoima[2][2])
    
    || Gatoima[0][0] == 'O' && (Gatoima[0][0] == Gatoima[1][0] || Gatoima[0][0] == Gatoima[2][0] ||  Gatoima[1][0] == Gatoima[2][0])
    || Gatoima[0][1] == 'O' && (Gatoima[0][1] == Gatoima[1][1] || Gatoima[0][1] == Gatoima[2][1] ||  Gatoima[1][1] == Gatoima[2][1])
    || Gatoima[0][2] == 'O' && (Gatoima[0][2] == Gatoima[1][2] || Gatoima[0][2] == Gatoima[2][2] ||  Gatoima[1][2] == Gatoima[2][2])
    
    || Gatoima[0][0] == 'O' && (Gatoima[0][0] == Gatoima[1][1] || Gatoima[0][0] == Gatoima[2][2] ||  Gatoima[1][1] == Gatoima[2][2])
    || Gatoima[0][2] == 'O' && (Gatoima[0][2] == Gatoima[1][1] || Gatoima[0][2] == Gatoima[2][0] ||  Gatoima[1][1] == Gatoima[2][0])){
        ganar = true;
    }

    return ganar;
}

void Place_playima(int Move){
    char seleccionJugada;
    if(Turn % 2 == 0){
        seleccionJugada = 'X';
    }else{
        seleccionJugada = 'O';
    }

    if(Move == 1){
        Gatoima[0][0] = seleccionJugada;
    }else if(Move == 2){
        Gatoima[0][1] = seleccionJugada;
    }else if(Move == 3){
        Gatoima[0][2] = seleccionJugada;
    }else if(Move == 4){
        Gatoima[1][0] = seleccionJugada;
    }else if(Move == 5){
        Gatoima[1][1] = seleccionJugada;
    }else if(Move == 6){
        Gatoima[1][2] = seleccionJugada;
    }else if(Move == 7){
        Gatoima[2][0] = seleccionJugada;
    }else if(Move == 8){
        Gatoima[2][1] = seleccionJugada;
    }else if(Move == 9){
        Gatoima[2][2] = seleccionJugada;
    }
}

int The_best_move(char jugador){
    bool section_occupied = false;
    bool win = false;
    int Move = 0;

    Clone_array();

    if(jugador == 'X'){
        do{
            Move++;
            section_occupied = Check_playima(Move);

            if(section_occupied == false){
                Place_playima(Move);
                win = Check_winima(Move);
            }
            Clone_array();
        }while(Move <= 9 && win == false);
    }
    else if(jugador == 'O'){
        do{
            Move++;
            section_occupied = Check_playima(Move);

            if(section_occupied == false){
                Place_playima(Move);
                win = Check_winima(Move); 
            }
            Clone_array();
        }while(Move <= 9 && win == false);
    }
    if(Move >= 10){
        Move = -1;
    }
    return Move;
}
