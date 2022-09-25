# Exercise 1: A program that asks the user for his annual rent and exhibit the corresponding tax rate
## tax selection section (code c++)
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
