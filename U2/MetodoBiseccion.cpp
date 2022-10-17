#include <iostream>
#include <cmath>
#include <iomanip> //Para el set precision 

using namespace std;

float plantearecuacion (float valor){
    return (pow(valor, 2) - valor - 12);
}

int imprimirtabla(){
    for(int i = 0; i < 161; i++){
        cout << "-";
    }
    cout << "\n";
    return 0;
}

int main (){
    int solucion = 1;
    int interador = 1;
    float a = 1;
    float b = 1;
    float c = 1;
    float ya = 1; 
    float yb = 1; 
    float yc = 1;
    float margenerror = 0.001;
    
    //Input 
    cout << "Ingresa el valor de a: ";
    cin >> a;

    cout << "Ingresa el valor de b: ";
    cin >> b;

    imprimirtabla();
    cout << "| Interador \t| a \t\t\t| b \t\t\t| c \t\t\t| y(a)\t\t\t| y(b)\t\t\t| y(c)\t\t\t| \n"; //Se realizan los encabezados con el formato de int imprimir tabla
    imprimirtabla();

    //Procesing 
    do{
         ya = plantearecuacion (a);
         yb = plantearecuacion (b);
         c = (a+b)/2;
         yc = plantearecuacion (c);

        cout << "| " << interador << fixed << setprecision(8) << "\t\t| " << a << "\t\t| " << b << "\t\t| " << c << "\t\t| " << ya << "\t\t| " << yb << "\t\t| " << yc << "\t\t| \n"; //Se imprimen los resultados de cada columna 
        imprimirtabla();
        
        if((ya * yc) < 0){
            b = c;
        }else{
            a = c;
        }


        if(a == b){
            solucion = 0;
            break;
        }

        interador++;

    }while(abs(yc) >= margenerror);


    //Output
    if(solucion != 0){
            cout << "The root is: " << setprecision(3) << c << "\n";
    }else{
            cout << "These numbers have no range";
    }

    return 0;
}