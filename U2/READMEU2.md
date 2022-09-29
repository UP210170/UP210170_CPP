# Exercise 1: A program that asks the user for his annual rent and exhibit the corresponding tax rate
## Preprocessor directives (c++)
```c++
#include <iostream>
#include <stdio.h>
```

## Input (c++)
```c++
//request for annual rent
   cout << "Enter your annual rent: \n";
   cin >> rent;
```

## Processing (c++)
```c++
    //Processing 
    if(rent > 0){
        if((rent < 10000) || (rent >=10000 & rent < 20000) || (rent >= 20000 & rent < 35000) || (rent >= 35000 & rent < 60000) || (rent >= 60000)){
        if (rent < 10000){
            descuento = rent*.05;
        }

        if(rent >= 10000 & rent < 20000){
            descuento = rent*.15;
        }

        if(rent >= 20000 & rent < 35000){
            descuento = rent*.20;
        }

        if(rent >= 35000 & rent < 60000){
            descuento = rent*.30;
        }

        if(rent >= 60000) {
            descuento = rent*.45;
        }
        }
    }else {
        cout << "The data you entered is incorrect" << endl;
    }
```

## Output
```c++
//Data output
    cout << "Your data is: " << endl;
    cout << "* Your annual rent is: " << "$" << rent << endl;
    cout << "* Your tax is: " << taxes1 << "%" << endl;
    cout << "* Must pay: " << "$" << descuento << endl;
```


## Explanation
1. Ask the user for his annual rent
2. Check if the entered value is correct
3. If it is not correct, you will receive an alert
4. If the rent is minor than $10,000 the tax it is 5%
5. If the rent is greater or equal than to $10,000 and minor than $20,000 the tax it is 15%
6. If the rent is greater or equal than to $20,000 and minor tha $35,000 the tax it is 20%
7. If the rent is greater or equal than to $35,000 and minor than $60,000 the tax it is 30%
8. If the rent is greater or equal than $60,000 the tax it is 45%
9. Printf the tax rate and the new annual rent

## Screen shots
### - Rent < $10,000
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/5%25.png" alt="5%" align="center" height="150" width="700">

### - Rent >= $10,000 and Rent < $20,000
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/15%25.png" alt="15%" align="center" height="150" width="700">

### - Rent >= $20,000 and Rent < $35,000
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/20%25.png" alt="20%" align="center" height="150" width="700">

### - Rent >= $35,000 and Rent < $60,000
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/30%25.png" alt="30%" align="center" height="150" width="700">

### - Rent >= $60,000 
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/45%25.png" alt="45%" align="center" height="150" width="700">


# Exercise 2: A program that asks the user for his employment score and show his final salary
## Preprocessor directives (c++)
```c++
#include <iostream>
#include <stdio.h>
```    

## Input (c++)
```c++
    //request his annual score 
    cout << "Enter your score for the year: " << endl;
    cin >> puntuacion;
```

## Processing (c++)
```c++
    //Processing
    if(puntuacion <= 1){
         if((puntuacion == 0.4) || (puntuacion >= 0.6) || (puntuacion == 0.0)){

        //if de acorde al nivel ingresado
        if(puntuacion == 0.0){
            cout << "Your level of performance is Unacceptable" << endl;
        }
        else if(puntuacion == 0.4){
            cout << "Your level of performance is Acceptable" << endl;
        }
        else if(puntuacion >= 0.6){
            cout << "Your level of performance is Meritorious" << endl;
        }
    }
        
    }else{
        cout << "The value your entered is incorrect" << endl;
    }
```

## Output
```c++
    //Output
    cout << "Your final money is: " << "$" << sueldo1 << endl;
```

## Explanation 
1. Ask the user for his annual score in the company
2. Check if the entered value is correct
3. The level when the score is == 0.0 is "Unacceptable" , == 0.4 is "Acceptable" and >= 0.6 is "Meritorious"  
4. The score is multiplied by 2400
5. If the score is equal than 0.0 the new salary is $0 (0.0 (2400) = $0)
6. If the score is equal than 0.4 the new salary is $960 (0.4(2400) = $960)
7. If the score is equal or greater than 0.6 the new salary it varies 
8. If the score is greater than 1, you receive an alert
9. Printf the performance level and new annual salary

## Screen shots
### - Score == 0.0
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/0.0.png" alt="5%" align="center" height="150" width="700">

### - Score == 0.4
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/0.4.png" alt="5%" align="center" height="150" width="700">

### - Score >= 0.6
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/0.6.png" alt="5%" align="center" height="150" width="700">

### - Score > 1
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/1.png" alt="5%" align="center" height="150" width="700">


# Exercise 3: Ask the age and show the entry price (Games room)
## Preprocessor directives (c++)
```c++
#include <iostream>
#include <stdio.h>
```    
## Input (c++)
```c++
  // Input
    cout << "Enter your age: " << endl;
    cin >> edad;
```

## Processing (c++)
```c++
if (edad > 1)
    {
        if ((edad < 4) || (edad >= 4 && edad <= 18) || (edad > 18))
        {
            if (edad < 4)
            {
                precio = 0;
            }
            else if (edad >= 4 && edad <= 18)
            {
                precio = 5;
            }
            else if (edad > 18)
            {
                precio = 10;
            }
        }
    }else{
        cout << "The age entered is incorrect" << endl;
    }
```
## Output (c++)
```c++
//Output
        cout << "The price to pay is: "
            << "$" << precio << endl;
```
## Explanation
1. Ask the client for his age 
2. Check if the entered value is correct
3. If the client's age is minor than 4, the admission price is $0 (FREE)
4. If the client's age is greater or equal than 4 and minor o equal than 18 the admission price is $5
5. If the client's age is greater than 18, the admission price is $10
6. If the age is minor than 1, you receive an alert
7. Printf the admission price 

## Screen shots
### - Age < 4
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/menor 4.png" alt="5%" align="center" height="150" width="700">

### - Age >= 4 or Age <= 18
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/4 y 18.png" alt="5%" align="center" height="150" width="700">

### - Age > 18
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/mas 18.png" alt="5%" align="center" height="150" width="700">

### - Age < 1
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/0.png" alt="5%" align="center" height="150" width="700">


# Exercise 4: Ask the client what pizza do you want and select the ingredients 
## Preprocessor directives (c++)
```c++
#include <iostream>
#include <stdio.h>
```   

## Input (c++)
```c++
//Input
    cout << "\nWelcome, What her name?" << endl;
    cin >> nombre;


    cout << "\n\n Option Menu" << endl;
    cout << "1. Vegetarian" << endl;
    cout << "2. No Vegetarian" << endl;

    cout << "\n\nEnter a pizza option: " << endl;
    cin >> pizza;
```

## Processing (c++)
```c++
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

    }else {
        cout << "El valor ingresado no se encontro" << endl;
    }
```

## Output (c++)
```c++
 //Output
    cout << "\nDear Customer " << nombre << endl;
    cout << "Your order is: " << endl;
    cout << "A pizza of " << pizzav << endl;
    cout << "With these ingredients Mozarella, Tomate y " << ingre << endl;
    cout << "\n¡Thanks for your preference!" << endl;
```

## Explanation
1. Ask the client what pizza do you want and what ingredient do you want
2. (1) Vegetarian (2) No Vegetarian 
3. Vegetarian - (1) Pimiento (2) Tofu
4. No Vegetarian - (1) Peperoni (2) Jamón (3) Salmón
5. Printf the type pizza, ingredients and name of the client
6. If the number selecction is different to 1 or 2 you receive an alert

## Screen shots
### - Pizza Vegetarian with Pimiento
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/Pimiento.png" alt="5%" align="center" height="150" width="700">

### - Pizza Vegetarian with Tofu
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/4 y 18.png" alt="5%" align="center" height="150" width="700">

### - Pizza No vegetarian with Peperoni
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/mas 18.png" alt="5%" align="center" height="150" width="700">

### - Pizza No vegetarian with Jamón
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/0.png" alt="5%" align="center" height="150" width="700">

### - Pizza No vegetarian with Salmón
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/mas 18.png" alt="5%" align="center" height="150" width="700">

### - Invalid Number
<img src="https://github.com/UP210170/UP210170_CPP/blob/main/imagenes/0.png" alt="5%" align="center" height="150" width="700">


