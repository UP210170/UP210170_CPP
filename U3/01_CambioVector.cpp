 /*
Date: 22/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: 
*/

#include <iostream>

using namespace std;

void obtenerCambio(int, string);
void imprimirCambio(string);

int denominaciones[9]={500,200,100,50,20,10,5,2,1};
int cantidad[9]={0};

int main(){
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
    while(dinero > 0){
         if(tipo == "TOTAL"){
            for (int denominacion = 0; denominacion < 9; denominacion++){
            if((dinero - denominaciones[denominacion]) >= 0){
                cantidad[denominacion]++;
                dinero -= denominaciones[denominacion];
                break;
            }
            }
        }
        else if(tipo == "Coins"){
            for(int denominacion = 5; denominacion < 9; denominacion++){
                if((dinero - denominaciones[denominacion]) >= 0){
                    cantidad[denominacion]++;
                    dinero -= denominaciones[denominacion];
                    break;
                }

            } 
        }
    }   
}



//This function prints the change
void imprimirCambio(string tipo)
{
    cout << "El cambio es de: " << endl;
    if(tipo == "TOTAL"){
        for(int denominacion = 0; denominacion < 5; denominacion++){
            cout << "Bills of $" << denominaciones[denominacion] << ": " << cantidad[denominacion] << endl;
        }
        for(int denominacion = 5; denominacion < 9; denominacion++){
            cout << "Coins of $" << denominaciones[denominacion] << ": " << cantidad[denominacion] << endl;
        }
    }else if(tipo == "Coins"){
        for(int denominacion = 0; denominacion < 9; denominacion++){
            cout << "Coins of $" << denominaciones[denominacion] << ": " << cantidad[denominacion] << endl;
        }
    }   
}
