/*
Date: 17/11/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Unit 3
Last-Modification: 20/11/2022
*/

#include <iostream>
#include <time.h>

using namespace std;

void remplazarXima(int);
void remplazarOima(int);
void gatoxy(int x, int y)
{
    cout << "\033[" << y << ";" << x << "f";
}

char Cat[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char Gatoima[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void make_board();
int CPU_easy();
/*
Function to get the move of the CPU (Level easy)
Return: Value of jugada 1 - 9
*/

int The_best_moveeasy(char);
/*
Function to obtain the best play of a certain player (Level easy)
Params: The type of player
Return: Value of jugada 1 - 9
*/

bool Chek_winimaeasy(int);
/*
Function to check if that move wins the game on the imaginary board (Level easy)
Params: The type of board on which it is played
Return: True if you win
        False if you still don't win
*/

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

// Declaration of global variables
char Player1[20];
char Player2[20];
char Player3[20];
string Player_CPU = "CPU";
int row, col;
int Turn = 1;
int win;
const char Humano = 'X';
const char PC = 'O';
const string Tablero = "REAL";
const string Tableroimaginario = "IMAGINARIO";
int Type_Game;

int main()
{
    // Declaration of variables
    int Move;
    bool Game_over = false;
    bool Section_occupied = true;
    char Game;
    int nivel;

    // Ask the user if you want to play
    system("cls");
    gatoxy(60, 5);
    cout << "\033[0;35m"
         << "Tic Tac Toe"
         << "\033[0m" << endl;
    gatoxy(45, 6);
    cout << "\033[0;34m"
         << "Press Y to play and any letter to exit: "
         << "\033[0m";
    cin >> Game;

    if (Game == 'Y' || Game == 'y')
    {
        system("cls");
        // Ask the user which game mode he is going to play
        gatoxy(42, 5);
        cout << "\033[0;32m"
             << "Choose a game mode ("
             << "\033[0;34m"
             << "1. Multiplayer "
             << "\033[0;31m"
             << "2. VS CPU"
             << "\033[0;32m"
             << "): "
             << "\033[0m";
        cin >> Type_Game;

        // Enter 1 player mode
        if (Type_Game == 1)
        {
            system("cls");
            // Ask the names of player´s
            gatoxy(45, 5);
            cout << "\033[0;34m"
                 << "Welcome Player 1 - What is your name? "
                 << "\033[0m" << endl;
            cin >> Player1;

            system("cls");

            gatoxy(45, 5);
            cout << "\033[0;31m"
                 << "Welcome Player 2 - What is your name? "
                 << "\033[0m" << endl;
            cin >> Player2;

            do
            {
                system("cls");
                gatoxy(25, 2);
                cout << "\033[0;37m"
                     << "************************* "
                     << "\033[0;34m"
                     << "Player 1 [X] "
                     << "\033[0;37m"
                     << "vs "
                     << "\033[0;31m"
                     << "Player 2 [O] "
                     << "\033[0;37m"
                     << "****************************"
                     << "\033[0m";
                cout << "\n";
                make_board();
                do
                {
                    Move = Choose_play();
                    Section_occupied = Check_play(Move);
                    if (Section_occupied == true)
                    {
                        system("cls");
                        gatoxy(60, 2);
                        cout << "\033[0;31m"
                             << "Try "
                             << "\033[0;32m"
                             << "again \n"
                             << "\033[0m";
                        make_board();
                    }
                } while (Section_occupied == true);

                Place_play(Move);

                Game_over = Check_win();

            } while (Game_over == false && Turn < 10);

            system("cls");
            gatoxy(25, 2);
            cout << "\033[0;37m"
                 << "************************* "
                 << "\033[0;34m"
                 << "Player 1 [X] "
                 << "\033[0;37m"
                 << "vs "
                 << "\033[0;31m"
                 << "Player 2 [O] "
                 << "\033[0;37m"
                 << "****************************"
                 << "\033[0m";
            cout << "\n";
            make_board();

            if (Game_over == true)
            {
                if ((Turn - 1) % 2 == 0)
                {
                    gatoxy(60, 12);
                    cout << "\033[0;31m"
                         << "Win the "
                         << Player2 << "\033[0m";
                    cout << "\n";
                }
                else
                {
                    gatoxy(60, 12);
                    cout << "\033[0;34m"
                         << "Win the "
                         << Player1 << "\033[0m";
                    cout << "\n";
                }
            }
            else
            {
                gatoxy(55, 12);
                cout << "\033[1;34m"
                     << " ***********************  Tie ************************"
                     << "\033[0m";
            }
        }
        // Enter 2 player mode
        else if (Type_Game == 2)
        {

            system("cls");
            gatoxy(45, 5);
            cout << "\033[0;32m"
                 << "Difficulty level: "
                 << "\033[0;37m"
                 << "1 - Easy "
                 << "\033[0;31m"
                 << "2 - Medium"
                 << "\033[0m" << endl;
            cin >> nivel;

            if (nivel == 1)
            {
                system("cls");

                gatoxy(45, 5);
                cout << "\033[0;34m"
                     << "Welcome Player 1 - What is your name? "
                     << "\033[0m" << endl;
                cin >> Player3;

                do
                {
                    system("cls");
                    gatoxy(25, 2);
                    cout << "\033[0;37m"
                         << "************************* "
                         << "\033[0;34m"
                         << "Player 1 [X] "
                         << "\033[0;37m"
                         << "vs "
                         << "\033[0;31m"
                         << "CPU [O] "
                         << "\033[0;37m"
                         << "****************************"
                         << "\033[0m";
                    if ((Turn - 1) % 2 == 0)
                    {
                        do
                        {
                            make_board();
                            cout << "\n";
                            Move = Choose_playima();
                            Section_occupied = Check_play(Move);

                            if (Section_occupied == true)
                            {
                                system("cls");
                                gatoxy(60, 2);
                                cout << "\033[0;31m"
                                     << "Try "
                                     << "\033[0;32m"
                                     << "again \n"
                                     << "\033[0m";
                                make_board();
                            }

                        } while (Section_occupied == true);
                        Place_play(Move);
                        Game_over = Check_win();
                    }
                    else
                    {
                        make_board();
                        Move = CPU_easy();
                        Place_play(Move);
                        Game_over = Check_win();
                    }

                } while (Game_over == false and Turn < 10);

                system("cls");
                gatoxy(25, 2);
                cout << "\033[0;37m"
                     << "************************* "
                     << "\033[0;34m"
                     << "Player 1 [X] "
                     << "\033[0;37m"
                     << "vs "
                     << "\033[0;31m"
                     << "CPU [O] "
                     << "\033[0;37m"
                     << "****************************"
                     << "\033[0m";
                cout << "\n";
                make_board();

                if (Game_over == true)
                {
                    if ((Turn - 1) % 2 == 0)
                    {
                        gatoxy(60, 12);
                        cout << "\033[0;31m"
                             << "Win the "
                             << Player_CPU << "\033[0m";
                        cout << "\n";
                    }
                    else
                    {
                        gatoxy(60, 12);
                        cout << "\033[1;34m"
                             << "Win the player "
                             << Player3 << "\033[0m";
                        cout << "\n";
                    }
                }
                else
                {
                    gatoxy(55, 12);
                    cout << "\033[1;34m"
                         << " ***********************  Tie ************************"
                         << "\033[0m";
                }
            }
            else if (nivel == 2)
            {
                system("cls");
                gatoxy(45, 5);
                cout << "\033[0;34m"
                     << "Welcome Player 1 - What is your name? "
                     << "\033[0m" << endl;
                cin >> Player3;

                do
                {
                    system("cls");
                    gatoxy(25, 2);
                    cout << "\033[0;37m"
                         << "************************* "
                         << "\033[0;34m"
                         << "Player 1 [X] "
                         << "\033[0;37m"
                         << "vs "
                         << "\033[0;31m"
                         << "CPU [O] "
                         << "\033[0;37m"
                         << "****************************"
                         << "\033[0m";
                    if ((Turn - 1) % 2 == 0)
                    {
                        do
                        {
                            make_board();
                            Move = Choose_playima();
                            Section_occupied = Check_play(Move);

                            if (Section_occupied == true)
                            {
                                system("cls");
                                gatoxy(60, 2);
                                cout << "\033[0;31m"
                                     << "Try "
                                     << "\033[0;32m"
                                     << "again \n"
                                     << "\033[0m";
                                make_board();
                            }

                        } while (Section_occupied == true);
                        Place_play(Move);
                        Game_over = Check_win();
                    }
                    else
                    {
                        make_board();
                        Move = CPU();
                        Place_play(Move);
                        Game_over = Check_win();
                    }

                } while (Game_over == false and Turn < 10);

                system("cls");
                gatoxy(25, 2);
                cout << "\033[0;37m"
                     << "************************* "
                     << "\033[0;34m"
                     << "Player 1 [X] "
                     << "\033[0;37m"
                     << "vs "
                     << "\033[0;31m"
                     << "CPU [O] "
                     << "\033[0;37m"
                     << "****************************"
                     << "\033[0m";
                cout << "\n";
                make_board();

                if (Game_over == true)
                {
                    if ((Turn - 1) % 2 == 0)
                    {
                        gatoxy(60, 12);
                        cout << "\033[0;31m"
                             << "Win the "
                             << Player_CPU << "\033[0m";
                        cout << "\n";
                    }
                    else
                    {
                        gatoxy(60, 12);
                        cout << "\033[1;34m"
                             << "Win the player "
                             << Player3 << "\033[0m";
                        cout << "\n";
                    }
                }
                else
                {
                    gatoxy(55, 12);
                    cout << "\033[1;34m"
                         << " ***********************  Tie ************************"
                         << "\033[0m";
                }
            }
        }
        else
        {
            system("cls");
            gatoxy(45, 9);
            cout << "\033[1;34m"
                 << "Mode of game invalid"
                 << "\033[0m";
        }
    }

    else
    {
        system("cls");
        gatoxy(45, 9);
        cout << "\033[1;34m"
             << "The Game is Over"
             << "\033[0m" << endl;
    }

    getchar();
    return 0;
}

void make_board()
{
    int row = 0;
    int col = 0;

    gatoxy(10, 5);
    cout << "\033[0;32m"
         << "JUG"
         << "\033[0;37m"
         << "ADO"
         << "\033[0;31m"
         << "RES"
         << "\033[0m";
    cout << "\n";

    if (Type_Game == 1)
    {
        gatoxy(10, 6);
        cout << "==> "
             << "\033[1;34m"
             << "X - "
             << "\033[0m" << Player1;
        gatoxy(10, 7);
        cout << "==> "
             << "\033[1;31m"
             << "O - "
             << "\033[0m" << Player2;
    }
    else if (Type_Game == 2)
    {
        gatoxy(10, 6);
        cout << "==> "
             << "\033[1;34m"
             << "X - "
             << "\033[0m" << Player3;
        gatoxy(10, 7);
        cout << "==> "
             << "\033[1;31m"
             << "O - "
             << "\033[0m"
             << "CPU";
    }

    cout << "\n";
    for (int fila = 0; fila < 6; fila++)
    {
        gatoxy(60, 5 + fila);
        for (int columna = 0; columna < 3; columna++)
        {
            if (fila < 5 && fila % 2 == 1)
            {
                cout << "\033[0;32m"
                     << "___"
                     << "\033[0m";
            }
            else
            {
                if (fila < 5)
                {
                    if (Cat[row][col] == 'X')
                    {
                        cout << "\033[1;34m"
                             << " " << Cat[row][col] << " "
                             << "\033[0m";
                    }
                    else if (Cat[row][col] == 'O')
                    {
                        cout << "\033[0;31m"
                             << " " << Cat[row][col] << " "
                             << "\033[0m";
                    }
                    else
                    {
                        cout << " " << Cat[row][col] << " ";
                    }

                    col++;
                }
                else
                {
                    cout << "   ";
                }
            }
            if (columna < 2)
            {
                cout << "\033[0;31m"
                     << "|"
                     << "\033[0m";
            }
        }
        col = 0;
        if (fila % 2 == 0)
        {
            row++;
        }

        cout << endl;
    }
}

bool Check_play(int Move)
{
    if (Move == 1)
    {
        row = 0;
        col = 0;
    }
    else if (Move == 2)
    {
        row = 0;
        col = 1;
    }
    else if (Move == 3)
    {
        row = 0;
        col = 2;
    }
    else if (Move == 4)
    {
        row = 1;
        col = 0;
    }
    else if (Move == 5)
    {
        row = 1;
        col = 1;
    }
    else if (Move == 6)
    {
        row = 1;
        col = 2;
    }
    else if (Move == 7)
    {
        row = 2;
        col = 0;
    }
    else if (Move == 8)
    {
        row = 2;
        col = 1;
    }
    else if (Move == 9)
    {
        row = 2;
        col = 2;
    }
    if (Cat[row][col] == 'O' || Cat[row][col] == 'X')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Choose_play()
{
    int Move;
    int contador = 0;
    string opciones = "123456789";
    cout << "\n";
    cout << "\033[0;32m"
         << "GAME "
         << "\033[0;31m"
         << "OPTIONS"
         << "\033[0m" << endl;

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << opciones[contador] << " [" << fila << ", " << columna << "]";
            contador++;
            cout << endl;
        }
    }

    do
    {
        if ((Turn - 1) % 2 == 0)
        {
            cout << "\033[0;34m"
                 << "The Turn is: " << Player1 << "\033[0m";
            cout << "\n";
        }
        else
        {
            cout << "\033[0;31m"
                 << "The Turn is: " << Player2 << "\033[0m";
            cout << "\n";
        }
        cout << "\033[0;32m"
             << "Give me "
             << "\033[0;37m"
             << "your move "
             << "\033[0;31m"
             << "(from 1 to 9): "
             << "\033[0m";
        cin >> Move;
    } while (Move > 9 && Move < 0);
    return Move;
}

int Choose_playima()
{
    int Move;
    int contador = 0;
    string opciones = "123456789";
    cout << "\033[0;32m"
         << "GAME "
         << "\033[0;31m"
         << "OPTIONS"
         << "\033[0m" << endl;

    for (int fila = 0; fila < 3; fila++)
    {
        for (int columna = 0; columna < 3; columna++)
        {
            cout << opciones[contador] << " [" << fila << ", " << columna << "]";
            contador++;
            cout << endl;
        }
    }

    do
    {
        if ((Turn - 1) % 2 == 0)
        {
            cout << "\033[0;34m"
                 << "The Turn is: " << Player3 << "\033[0m";
            cout << "\n";
        }
        else
        {
            cout << "\033[0;31m"
                 << "The Turn is: " << Player_CPU << "\033[0m";
            cout << "\n";
        }
        cout << "\033[0;32m"
             << "Give me "
             << "\033[0;37m"
             << "your move "
             << "\033[0;31m"
             << "(from 1 to 9): "
             << "\033[0m";
        cin >> Move;
    } while (Move > 9 && Move < 0);
    return Move;
}

void Place_play(int Move)
{
    char seleccionJugada;
    if (Turn % 2 == 0)
    {
        seleccionJugada = 'O';
    }
    else
    {
        seleccionJugada = 'X';
    }

    if (Move == 1)
    {
        Cat[0][0] = seleccionJugada;
    }
    else if (Move == 2)
    {
        Cat[0][1] = seleccionJugada;
    }
    else if (Move == 3)
    {
        Cat[0][2] = seleccionJugada;
    }
    else if (Move == 4)
    {
        Cat[1][0] = seleccionJugada;
    }
    else if (Move == 5)
    {
        Cat[1][1] = seleccionJugada;
    }
    else if (Move == 6)
    {
        Cat[1][2] = seleccionJugada;
    }
    else if (Move == 7)
    {
        Cat[2][0] = seleccionJugada;
    }
    else if (Move == 8)
    {
        Cat[2][1] = seleccionJugada;
    }
    else if (Move == 9)
    {
        Cat[2][2] = seleccionJugada;
    }
    Turn++;
}

bool Check_win()
{
    bool ganar = false;
    if (Cat[0][0] == 'X' && Cat[0][0] == Cat[0][1] && Cat[0][0] == Cat[0][2] || Cat[1][0] == 'X' && Cat[1][0] == Cat[1][1] && Cat[1][0] == Cat[1][2] || Cat[2][0] == 'X' && Cat[2][0] == Cat[2][1] && Cat[2][0] == Cat[2][2]

        || Cat[0][0] == 'X' && Cat[0][0] == Cat[1][0] && Cat[0][0] == Cat[2][0] || Cat[0][1] == 'X' && Cat[0][1] == Cat[1][1] && Cat[0][1] == Cat[2][1] || Cat[0][2] == 'X' && Cat[0][2] == Cat[1][2] && Cat[0][2] == Cat[2][2]

        || Cat[0][0] == 'X' && Cat[0][0] == Cat[1][1] && Cat[0][0] == Cat[2][2] || Cat[0][2] == 'X' && Cat[0][2] == Cat[1][1] && Cat[0][2] == Cat[2][0])
    {
        ganar = true;
    }
    if (Cat[0][0] == 'O' && Cat[0][0] == Cat[0][1] && Cat[0][0] == Cat[0][2] || Cat[1][0] == 'O' && Cat[1][0] == Cat[1][1] && Cat[1][0] == Cat[1][2] || Cat[2][0] == 'O' && Cat[2][0] == Cat[2][1] && Cat[2][0] == Cat[2][2]

        || Cat[0][0] == 'O' && Cat[0][0] == Cat[1][0] && Cat[0][0] == Cat[2][0] || Cat[0][1] == 'O' && Cat[0][1] == Cat[1][1] && Cat[0][1] == Cat[2][1] || Cat[0][2] == 'O' && Cat[0][2] == Cat[1][2] && Cat[0][2] == Cat[2][2]

        || Cat[0][0] == 'O' && Cat[0][0] == Cat[1][1] && Cat[0][0] == Cat[2][2] || Cat[0][2] == 'O' && Cat[0][2] == Cat[1][1] && Cat[0][2] == Cat[2][0])
    {
        ganar = true;
    }

    return ganar;
}

// Functions smart cpu

void Clone_array()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            Gatoima[row][col] = Cat[row][col];
        }
    }
}

int CPU()
{
    int Move;
    bool section_occupied = true;
    srand(time(NULL));

    Move = The_best_move(PC);

    if (Move != -1)
    {
        return Move;
    }

    Move = The_best_move(Humano);

    if (Move != -1)
    {
        return Move;
    }

    do
    {
        Move = 1 + rand() % 9;
        section_occupied = Check_play(Move);
    } while (section_occupied == true);
    return Move;
}

int CPU_easy()
{
    int Move;
    bool section_occupied = true;
    srand(time(NULL));

    Move = The_best_moveeasy(PC);

    if (Move != -1)
    {
        return Move;
    }

    Move = The_best_moveeasy(Humano);

    if (Move != -1)
    {
        return Move;
    }

    do
    {
        Move = 1 + rand() % 9;
        section_occupied = Check_play(Move);
    } while (section_occupied == true);
    return Move;
}

bool Check_playima(int Move)
{
    if (Move == 1)
    {
        row = 0;
        col = 0;
    }
    else if (Move == 2)
    {
        row = 0;
        col = 1;
    }
    else if (Move == 3)
    {
        row = 0;
        col = 2;
    }
    else if (Move == 4)
    {
        row = 1;
        col = 0;
    }
    else if (Move == 5)
    {
        row = 1;
        col = 1;
    }
    else if (Move == 6)
    {
        row = 1;
        col = 2;
    }
    else if (Move == 7)
    {
        row = 2;
        col = 0;
    }
    else if (Move == 8)
    {
        row = 2;
        col = 1;
    }
    else if (Move == 9)
    {
        row = 2;
        col = 2;
    }
    if (Gatoima[row][col] == 'O' || Gatoima[row][col] == 'X')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Check_winima(int Move)
{
    bool winner = false;
    int place = 0;
    while (place < 3)
    {
        if (Gatoima[place][0] == Gatoima[place][1] && Gatoima[place][place] == Gatoima[place][2] && Gatoima[place][1] == Gatoima[place][2])
        {
            winner = true;
            break;
        }
        else if (Gatoima[0][place] == Gatoima[1][place] && Gatoima[0][place] == Gatoima[2][place] && Gatoima[1][place] == Gatoima[2][place])
        {
            winner = true;
            break;
        }
        else if (Gatoima[0][0] == Gatoima[1][1] && Gatoima[0][0] == Gatoima[2][2] && Gatoima[1][1] == Gatoima[2][2])
        {
            winner = true;
            break;
        }
        else if (Gatoima[2][0] == Gatoima[1][1] && Gatoima[2][0] == Gatoima[0][2] && Gatoima[0][2] == Gatoima[1][1])
        {
            winner = true;
            break;
        }

        place++;
    }
    return winner;
}

void Place_playima(int Move)
{
    char seleccionJugada;
    if (Turn % 2 == 0)
    {
        seleccionJugada = 'X';
    }
    else
    {
        seleccionJugada = 'O';
    }

    if (Move == 1)
    {
        Gatoima[0][0] = seleccionJugada;
    }
    else if (Move == 2)
    {
        Gatoima[0][1] = seleccionJugada;
    }
    else if (Move == 3)
    {
        Gatoima[0][2] = seleccionJugada;
    }
    else if (Move == 4)
    {
        Gatoima[1][0] = seleccionJugada;
    }
    else if (Move == 5)
    {
        Gatoima[1][1] = seleccionJugada;
    }
    else if (Move == 6)
    {
        Gatoima[1][2] = seleccionJugada;
    }
    else if (Move == 7)
    {
        Gatoima[2][0] = seleccionJugada;
    }
    else if (Move == 8)
    {
        Gatoima[2][1] = seleccionJugada;
    }
    else if (Move == 9)
    {
        Gatoima[2][2] = seleccionJugada;
    }
}

int The_best_move(char jugador)
{
    bool section_occupied = false;
    bool win = false;
    int Move = 0;

    Clone_array();

    if (jugador == PC)
    {
        do
        {
            Move++;
            section_occupied = Check_playima(Move);

            if (section_occupied == false)
            {
                remplazarXima(Move);
                win = Check_winima(Move);
            }
            Clone_array();
        } while (Move <= 9 && win == false);
    }

    else if (jugador == Humano)
    {
        do
        {
            Move++;
            section_occupied = Check_playima(Move);

            if (section_occupied == false)
            {
                remplazarOima(Move);
                win = Check_winima(Move);
            }
            Clone_array();
        } while (Move <= 9 && win == false);
    }
    if (Move >= 10)
    {
        Move = -1;
    }
    return Move;
}

void remplazarXima(int Move)
{
    char seleccionJugada;
    if (Turn % 2 == 0)
    {
        seleccionJugada = 'X';
    }

    if (Move == 1)
    {
        Gatoima[0][0] = seleccionJugada;
    }
    else if (Move == 2)
    {
        Gatoima[0][1] = seleccionJugada;
    }
    else if (Move == 3)
    {
        Gatoima[0][2] = seleccionJugada;
    }
    else if (Move == 4)
    {
        Gatoima[1][0] = seleccionJugada;
    }
    else if (Move == 5)
    {
        Gatoima[1][1] = seleccionJugada;
    }
    else if (Move == 6)
    {
        Gatoima[1][2] = seleccionJugada;
    }
    else if (Move == 7)
    {
        Gatoima[2][0] = seleccionJugada;
    }
    else if (Move == 8)
    {
        Gatoima[2][1] = seleccionJugada;
    }
    else if (Move == 9)
    {
        Gatoima[2][2] = seleccionJugada;
    }
}

void remplazarOima(int Move)
{
    char seleccionJugada;
    if (Turn % 2 == 1)
    {
        seleccionJugada = 'O';
    }

    if (Move == 1)
    {
        Gatoima[0][0] = seleccionJugada;
    }
    else if (Move == 2)
    {
        Gatoima[0][1] = seleccionJugada;
    }
    else if (Move == 3)
    {
        Gatoima[0][2] = seleccionJugada;
    }
    else if (Move == 4)
    {
        Gatoima[1][0] = seleccionJugada;
    }
    else if (Move == 5)
    {
        Gatoima[1][1] = seleccionJugada;
    }
    else if (Move == 6)
    {
        Gatoima[1][2] = seleccionJugada;
    }
    else if (Move == 7)
    {
        Gatoima[2][0] = seleccionJugada;
    }
    else if (Move == 8)
    {
        Gatoima[2][1] = seleccionJugada;
    }
    else if (Move == 9)
    {
        Gatoima[2][2] = seleccionJugada;
    }
}

bool Chek_winimaeasy(int Move)
{
    bool ganar = false;
    if (Gatoima[0][0] == 'X' && (Gatoima[0][0] == Gatoima[0][1] || Gatoima[0][0] == Gatoima[0][2] || Gatoima[0][1] == Gatoima[0][2]) || Gatoima[1][0] == 'X' && (Gatoima[1][0] == Gatoima[1][1] || Gatoima[1][0] == Gatoima[1][2] || Gatoima[1][1] == Gatoima[1][2]) || Gatoima[2][0] == 'X' && (Gatoima[2][0] == Gatoima[2][1] || Gatoima[2][0] == Gatoima[2][2] || Gatoima[2][1] == Gatoima[2][2])

        || Gatoima[0][0] == 'X' && (Gatoima[0][0] == Gatoima[1][0] || Gatoima[0][0] == Gatoima[2][0] || Gatoima[1][0] == Gatoima[2][0]) || Gatoima[0][1] == 'X' && (Gatoima[0][1] == Gatoima[1][1] || Gatoima[0][1] == Gatoima[2][1] || Gatoima[1][1] == Gatoima[2][1]) || Gatoima[0][2] == 'X' && (Gatoima[0][2] == Gatoima[1][2] || Gatoima[0][2] == Gatoima[2][2] || Gatoima[1][2] == Gatoima[2][2])

        || Gatoima[0][0] == 'X' && (Gatoima[0][0] == Gatoima[1][1] || Gatoima[0][0] == Gatoima[2][2] || Gatoima[1][1] == Gatoima[2][2]) || Gatoima[0][2] == 'X' && (Gatoima[0][2] == Gatoima[1][1] || Gatoima[0][2] == Gatoima[2][0] || Gatoima[1][1] == Gatoima[2][0]))
    {
        ganar = true;
    }
    if (Gatoima[0][0] == 'O' && (Gatoima[0][0] == Gatoima[0][1] || Gatoima[0][0] == Gatoima[0][2] || Gatoima[0][1] == Gatoima[0][2]) || Gatoima[1][0] == 'O' && (Gatoima[1][0] == Gatoima[1][1] || Gatoima[1][0] == Gatoima[1][2] || Gatoima[1][1] == Gatoima[1][2]) || Gatoima[2][0] == 'O' && (Gatoima[2][0] == Gatoima[2][1] || Gatoima[2][0] == Gatoima[2][2] || Gatoima[2][1] == Gatoima[2][2])

        || Gatoima[0][0] == 'O' && (Gatoima[0][0] == Gatoima[1][0] || Gatoima[0][0] == Gatoima[2][0] || Gatoima[1][0] == Gatoima[2][0]) || Gatoima[0][1] == 'O' && (Gatoima[0][1] == Gatoima[1][1] || Gatoima[0][1] == Gatoima[2][1] || Gatoima[1][1] == Gatoima[2][1]) || Gatoima[0][2] == 'O' && (Gatoima[0][2] == Gatoima[1][2] || Gatoima[0][2] == Gatoima[2][2] || Gatoima[1][2] == Gatoima[2][2])

        || Gatoima[0][0] == 'O' && (Gatoima[0][0] == Gatoima[1][1] || Gatoima[0][0] == Gatoima[2][2] || Gatoima[1][1] == Gatoima[2][2]) || Gatoima[0][2] == 'O' && (Gatoima[0][2] == Gatoima[1][1] || Gatoima[0][2] == Gatoima[2][0] || Gatoima[1][1] == Gatoima[2][0]))
    {
        ganar = true;
    }

    return ganar;
}

int The_best_moveeasy(char jugador)
{
    bool section_occupied = false;
    bool win = false;
    int Move = 0;

    Clone_array();

    if (jugador == PC)
    {
        do
        {
            Move++;
            section_occupied = Check_playima(Move);

            if (section_occupied == false)
            {
                remplazarXima(Move);
                win = Chek_winimaeasy(Move);
            }
            Clone_array();
        } while (Move <= 9 && win == false);
    }

    else if (jugador == Humano)
    {
        do
        {
            Move++;
            section_occupied = Check_playima(Move);

            if (section_occupied == false)
            {
                remplazarOima(Move);
                win = Chek_winimaeasy(Move);
            }
            Clone_array();
        } while (Move <= 9 && win == false);
    }
    if (Move >= 10)
    {
        Move = -1;
    }
    return Move;
}