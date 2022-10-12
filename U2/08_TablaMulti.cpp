#include <iostream>
#include <stdio.h>


using namespace std;

int main (){
    int numero, i;
    int limite;

    cout << "Enter a table limit: ";
    cin >> limite;

    cout << "Enter a whole number: ";
    cin >> numero;


    cout << "The number table" << numero << endl;



    if (numero <= 1 || numero >= 1)
    {
        for (i = 1; i <= limite; i++)
        {
            if (i == 1)
            {
                for (int espacio = 0; espacio <= 39; espacio++)
                {
                    cout << "-";
                }
                cout << "\n";
            }
            
            cout << "|" << i << "\t x \t" << numero << "\t = \t" << (numero * i) << "\t|\n";

            for (int espacio = 0; espacio <= 39; espacio++)
            {
                cout << "-";
            }
            cout << "\n";
        }
    }

    return 0;
}