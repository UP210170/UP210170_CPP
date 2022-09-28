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
    string ingre = "Pimiento" "Tofu" "Peperoni" "Jamón" "Salmón";
    string pizzav = "Vegetarian" "No Vegetarian";
    char nombre [20];

    cout << " WELCOME TO PIZZAS ROBERT " << endl;
    cout << "------------------------------------" << endl;

    //Input
    cout << "\nWelcome, What her name?" << endl;
    cin >> nombre;


    cout << "\n\n Option Menu" << endl;
    cout << "1. Vegetarian" << endl;
    cout << "2. No Vegetarian" << endl;

    cout << "\n\nEnter a pizza option: " << endl;
    cin >> pizza;
    
    //Processing 
    if((pizza == 1) || (pizza == 2)){
        if (pizza == 1){
        pizzav = "Vegetarian";
        cout << "\nIngredients of a vegetarian pizza, it includes (Mozarella y Tomate) choose one: " << endl;
        cout << "1. Pimiento" << endl;
        cout << "2. Tofu" << endl;

        cout << "\nIngredient you want to add:" << endl;
        cin >> ingrediente;

        if(ingrediente == 1){
            ingre = "Pimiento";
        } 
        else if(ingrediente == 2){
            ingre = "Tofu";
        }

 
      
       }


       if(pizza == 2){
        pizzav = "No Vegetarian";
        cout << "\nIngredients of a no vegetarian pizza, it includes (Mozarella y Tomate) choose one: " << endl;
        cout << "1. Peperoni" << endl;
        cout << "2. Jamón" << endl;
        cout << "3. Salmón" << endl;

        cout << "\nIngredient you want to add:" << endl;
        cin >> ingrediente;
        
        if(ingrediente == 1){
            ingre = "Peperoni";
        }
        else if(ingrediente == 2){
            ingre = "Jamón";
        }
        else if(ingrediente == 3){
            ingre = "Salmón";
        }
 
       }

        //Output
       cout << "\nDear Customer " << nombre << endl;
       cout << "Your order is: " << endl;
       cout << "A pizza of " << pizzav << endl;
       cout << "With these ingredients Mozarella, Tomate y " << ingre << endl;
       cout << "\n¡Thanks for your preference!" << endl;


    }else {
        cout << "El valor ingresado no se encontro" << endl;
    }

    return 0;
}