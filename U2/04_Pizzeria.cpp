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
enfunción de su respuesta le muestre un menú con los ingredientes disponibles para que elija. Solo se puede eligir un ingrediente además de la mozzarella y el 
tomate que están en todas lapizzas. Al final se debe mostrar por pantalla si la pizza elegida es vegetariana o no y todos los
ingredientes que lleva.
*/


#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int pizza;
    

    cout << "BIENVENIDOS A PIZZAS ROBERT " << endl;
    cout << "------------------------------------" << endl;
    cout << "\n\n Menú de opciones" << endl;
    cout << "1. Vegetariana" << endl;
    cout << "2. No Vegetariana" << endl;

    cout << "\n\nIngrese una opcion de pizza: " << endl;
    cin >> pizza;
    
    if (pizza == 1){
        cout << "\nIngredientes de una pizza vegetariana: " << endl;
        cout << "Pimiento" << endl;
        cout << "Tofu" << endl;
  
    }
    
    

    return 0;
}