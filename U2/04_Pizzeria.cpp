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

int main()
{
    int pizza;
    int ingrediente;
    string ingre = "Pepper"
                   "Tofu"
<<<<<<< HEAD
                   "Pepeproni"
=======
                   "Pepperoni"
>>>>>>> 7b5b79575d0c6cfa1b31f64e33ddfac87100f287
                   "Ham"
                   "Salmón";
    string pizzav = "Vegetarian"
                    "No Vegetarian";
    char nombre[20];

    cout << " WELCOME TO PIZZAS ROBERT " << endl;
    cout << "------------------------------------" << endl;

    // Input
    cout << "\nWelcome, What's your name?" << endl;
    cin >> nombre;

    cout << "\n\n Option Menu" << endl;
    cout << "1. Vegetarian" << endl;
    cout << "2. No Vegetarian" << endl;

    cout << "\n\nEnter a pizza option: " << endl;
    cin >> pizza;

    // Processing
    if ((pizza == 1) || (pizza == 2))
    {
        if (pizza == 1)
        {
            pizzav = "Vegetarian";
            cout << "\nIngredients of a vegetarian pizza, it includes (Mozzarella y Tomatoe) choose one: " << endl;
            cout << "1. Pepper" << endl;
            cout << "2. Tofu" << endl;

            cout << "\nIngredient you want to add:" << endl;
            cin >> ingrediente;

            if (ingrediente == 1)
            {
<<<<<<< HEAD
                ingre = "Pepper";
=======
                ingre = "Pimiento";
>>>>>>> 7b5b79575d0c6cfa1b31f64e33ddfac87100f287
            }
            else if (ingrediente == 2)
            {
                ingre = "Tofu";
            }else{
<<<<<<< HEAD
                cout << "Este igrediente no existe" << endl;
            }
        }
        if (pizza == 2)
        {
            pizzav = "No Vegetarian";
            cout << "\nIngredients of a no vegetarian pizza, it includes (Mozzarella y Tomatoe) choose one: " << endl;
            cout << "1. Pepperoni" << endl;
            cout << "2. Ham" << endl;
            cout << "3. Salmón" << endl;

            cout << "\nIngredient you want to add:" << endl;
            cin >> ingrediente;

            if (ingrediente == 1)
            {
                ingre = "Pepperoni";
            }
            else if (ingrediente == 2)
            {
                ingre = "Ham";
            }
            else if (ingrediente == 3)
            {
                ingre = "Salmón";
            }else{
=======
>>>>>>> 7b5b79575d0c6cfa1b31f64e33ddfac87100f287
                cout << "Este ingrediente no existe" << endl;
            }
        }

<<<<<<< HEAD
=======
        if (pizza == 2)
        {
            pizzav = "No Vegetarian";
            cout << "\nIngredients of a no vegetarian pizza, it includes (Mozarella y Tomatoe) choose one: " << endl;
            cout << "1. Pepperoni" << endl;
            cout << "2. Ham" << endl;
            cout << "3. Salmón" << endl;

            cout << "\nIngredient you want to add:" << endl;
            cin >> ingrediente;

            if (ingrediente == 1)
            {
                ingre = "Pepperoni";
            }
            else if (ingrediente == 2)
            {
                ingre = "Ham";
            }
            else if (ingrediente == 3)
            {
                ingre = "Salmón";
            }else {
                cout << "Este ingrediente no existe" << endl;
            }
        }

>>>>>>> 7b5b79575d0c6cfa1b31f64e33ddfac87100f287
        // Output
        cout << "\nDear Customer " << nombre << endl;
        cout << "Your order is: " << endl;
        cout << "A pizza of " << pizzav << endl;
        cout << "With these ingredients Mozzarella, Tomatoe y " << ingre << endl;
        cout << "\n¡Thanks for your preference!" << endl;
    }
    else
    {
        cout << "El valor ingresado no se encontro" << endl;
    }

    return 0;
}