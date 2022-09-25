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
            descuent45 = rent*.05;
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
### - Rent >= $20,000 and Rent < $35,000
### - Rent >= $35,000 and Rent < $60,000
### - Rent >= $60,000 
