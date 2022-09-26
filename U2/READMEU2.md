# Exercise 1: A program that asks the user for his annual rent and exhibit the corresponding tax rate
## Tax selection section (code c++)

    //request for annual rent
    cout << "Enter your annual rent: \n";
    cin >> rent;
    
    if(rent > 0){
        if (rent < 10000){
            descuent5 = rent*.05;
            taxes1 = (descuent5/rent)*100;
            cout << "Your data is: " << endl;
            cout << "* Your annual rent is: " << rent << endl;
            cout << "* Your tax is: " << taxes1 << "%" << endl;
            cout << "* Must pay: " << "$" << descuent5 << endl; 
        }

        if(rent >= 10000 & rent < 20000){
            descuent15 = rent*.15;
            taxes1 = (descuent15/rent)*100;
            cout << "Your data is: " << endl;
            cout << "* Your annual rent is: " << rent << endl;
            cout << "* Your tax is: " << taxes1 << "%" << endl;
            cout << "* Must pay: " << "$" << descuent15 << endl; 
        }

        if(rent >= 20000 & rent < 35000){
            descuent20 = rent*.20;
            taxes1 = (descuent20/rent)*100;
            cout << "Your data is: " << endl;
            cout << "* Your annual rent is: " << rent << endl;
            cout << "* Your tax is: " << taxes1 << "%" << endl;
            cout << "* Must pay: " << "$" << descuent20 << endl; 
        }

        if(rent >= 35000 & rent <= 60000){
            descuent30 = rent*.30;
            taxes1 = (descuent30/rent)*100;
            cout << "Your data is: " << endl;
            cout << "* Your annual rent is: " << rent << endl;
            cout << "* Your tax is: " << taxes1 << "%" << endl;
            cout << "* Must pay: " << "$" << descuent30 << endl; 
        }

        if(rent > 60000) {
            descuent45 = rent*.45;
            taxes1 = (descuent45/rent)*100;
            cout << "Your data is: " << endl;
            cout << "* Your annual rent is: " << rent << endl;
            cout << "* Your tax is: " << taxes1 << "%" << endl;
            cout << "* Must pay: " << "$" << descuent45 << endl; 
        }

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
## Score selection section (code c++)
    //request his annual score 
    cout << "Ingresa tu puntuación del año: " << endl;
    cin >> puntuacion;

    //Operación para obtener el sueldo
    sueldo1 = puntuacion * 2400;

    //If pirncipal para ver si el dato es correcto y entrar dentro de el 

    if(puntuacion <= 1){
         if((puntuacion == 0.4) || (puntuacion >= 0.6) || (puntuacion == 0.0)){

        //if de acorde al nivel ingresado
        if(puntuacion == 0.0){
            cout << "Tu nivel de desempeño es Inaceptable" << endl;
        }
        else if(puntuacion == 0.4){
            cout << "Tu nivel de desempeño es Aceptable" << endl;
        }
        else if(puntuacion >= 0.6){
            cout << "Tu nivel de desempeño es Meritorio" << endl;
        }

        //Mensaje del dinero final por su desempeño
        cout << "Tu dinero final es: " << "$" << sueldo1 << endl;
    }
        
    }else{
        cout << "El valor que ingreso es incorrecto" << endl;
    }

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

