/*
Date: 28/09/2022
Date last modification: 28/09/2022
Author: Oscar Noel Nuño Verdín
Email: up210170@alumnos.upa.edu.mx
Description: Exercise Unit 2
*/

/*
La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los
ingredientes para cada tipo de pizza aparecen a continuación. 
- Vegetarianos: Pimiento y tofu.
- Ingredientes no vegetarianos: Peperoni, Jamón y Salmón.
Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y 
enfunción de su respuesta le muestre un menú con los ingredientes disponibles para que elija. Solo se puede 
eligir un ingrediente además de la mozzarella y el 
tomate que están en todas las pizzas. Al final se debe mostrar por pantalla si la pizza elegida es vegetariana 
o no y todos los ingredientes que lleva.
*/


#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int pizza;
    int ingrediente;
    string ingre = "Pimiento" "Tofu";
    string ingreno = "Peperoni" "Jamón" "Salmón";
    string pizzav = "Vegetariana";
    string pizzan = "No Vegetariana";
    char nombre [20];

    cout << "BIENVENIDOS A PIZZAS ROBERT " << endl;
    cout << "------------------------------------" << endl;

    //Input
    cout << "\nSea usted bienvenido, Cuál es su nombre?" << endl;
    cin >> nombre;


    cout << "\n\n Menú de opciones" << endl;
    cout << "1. Vegetariana" << endl;
    cout << "2. No Vegetariana" << endl;

    cout << "\n\nIngrese una opcion de pizza: " << endl;
    cin >> pizza;
    
    //Processing 
    if((pizza == 1) || (pizza == 2)){
        if (pizza == 1){
        cout << "\nIngredientes de una pizza vegetariana, que incluye (Mozarella y Tomate) Elige uno: " << endl;
        cout << "1. Pimiento" << endl;
        cout << "2. Tofu" << endl;

        cout << "\nIngrediente que deseas agregar:" << endl;
        cin >> ingrediente;

        if(ingrediente == 1){
            ingre = "Pimiento";
        } 
        else if(ingrediente == 2){
            ingre = "Tofu";
        }

        //Output
        cout << "\nEstimado cliente " << nombre << endl;
        cout << "Su orden es: " << endl;
        cout << "Una pizza " << pizzav << endl;
        cout << "Con estos ingredientes Mozarella, Tomate y " << ingre << endl;
       }


       if(pizza == 2){
        cout << "\nIngredientes de una pizza no vegetariana, que incluye (Mozarella y Tomate) Elige uno: " << endl;
        cout << "1. Peperoni" << endl;
        cout << "2. Jamón" << endl;
        cout << "3. Salmón" << endl;

        cout << "\nIngrediente que deseas agregar:" << endl;
        cin >> ingrediente;
        
        if(ingrediente == 1){
            ingreno = "Peperoni";
        }
        else if(ingrediente == 2){
            ingreno = "Jamón";
        }
        else if(ingrediente == 3){
            ingreno = "Salmón";
        }
 
        //Output
        cout << "\nEstimado cliente " << nombre << endl;
        cout << "Su orden es: " << endl;
        cout << "Una pizza " << pizzan << endl;
        cout << "Con estos ingredientes Mozarella, Tomate y " << ingreno << endl;

       }
       cout << "\n¡GRACIAS POR SU PREFERENCIA!" << endl;
    }else {
        cout << "El valor ingresado no se encontro" << endl;
    }

    return 0;
}