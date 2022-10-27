/*
Date: 24/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Unit 3
*/

#include <iostream>

using namespace std;

void obtenerCambio(int, string);
void imprimirCambio(string);

//Global variables
int quinientos = 0, docientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;


int main()
{
    int dinero;
    string tipo;

    //The user enters an amount of money
    cout << "Enter an amount of money: ";
    cin >> dinero;
    
    //The user chooses if with coins and bills or only coins
    cout << "Enter TOTAL or Coins: ";
    cin >> tipo;

    //Call the functions
    obtenerCambio(dinero, tipo);
    imprimirCambio(tipo);
    
    return 0;
}


//This function gets the change
void obtenerCambio(int dinero, string tipo)
{
    while (dinero > 0)
    {
        if(tipo == "TOTAL"){
            (dinero >= 500) ? quinientos++, dinero -= 500 
        : (dinero >= 200) ? docientos++, dinero -= 200 
        : (dinero >= 100) ? cien++, dinero -= 100 
        : (dinero >= 50) ? cincuenta++, dinero -= 50 
        : (dinero >= 20) ? veinte++, dinero -= 20 
        : dinero;
        }
        else if(tipo == "Coins"){
            (dinero >= 10) ? diez++, dinero -= 10 
        : (dinero >= 5) ? cinco++, dinero -= 5 
        : (dinero >= 2) ? dos++, dinero -= 2 
        : (dinero >= 1) ? uno++, dinero -= 1 
        : dinero;
        } 
    }
}


//This function prints the change
void imprimirCambio(string tipo)
{
    cout << "El cambio es de: " << endl;
    if(tipo == "TOTAL"){
        cout << "Bills $500: " << quinientos << endl;
        cout << "Bills $200: " << docientos << endl;
        cout << "Bills $100: " << cien << endl;
        cout << "Bills $50: " << cincuenta << endl;
        cout << "Bills $20: " << veinte << endl;
        cout << "Coins 10: " << diez << endl;
        cout << "Coins 5: " << cinco << endl;
        cout << "Coins 2: " << dos << endl;
        cout << "Coins 1: " << uno << endl;
    }else if(tipo == "Coins"){
        cout << "Coins 10: " << diez << endl;
        cout << "Coins 5: " << cinco << endl;
        cout << "Coins 2: " << dos << endl;
        cout << "Coins 1: " << uno << endl;
    }   
}
