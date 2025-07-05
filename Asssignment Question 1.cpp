// Asssignment Question 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    string FirstName;
    string LastName;
    int NumItems;
    int index;
    int itemNumber;
    float subtotal;
    float discount = 0.00;
    float finaltotal;
    float quantity = 0.00;
    float amount;

    //prompting user to enter first and last name
    cout << "Enter First Name: ";
    cin >> FirstName;
    cout << "Enter Last Name: ";
    cin >> LastName;

    //adding space
    cout << endl
        << endl;

    //displaying the menu
    cout << " Street Bites Food Truck Menu:" << endl
        << "1. Spicy Chicken Tacos          - R45.00" << endl
        << "2. Loaded Nachos                - R60.00" << endl
        << "3. Veggies Burrito              - R50.00" << endl
        << "4. Grilled Quesadilla           - R70.00" << endl
        << "5. Beef Enchiladas              - R90.00" << endl
        << "6. Churros with Chocolate       - R40.00" << endl
        << "7. Fresh Lemonade               - R25.00" << endl
        << "8. Iced Coffee                  - R30.00";

    //adding space
    cout << endl
        << endl;

    //prompt user to say how many items they want
    cout << "How many items would you like to order?(Up to 10 items): ";
    cin >> NumItems;

    //making sure not more than 10 items are selected
    while (NumItems > 10 or NumItems < 1) {
        cout << "You can only order up to 10 items" << endl
            << "Enter a valid number: ";
        cin >> NumItems;
        
    }

    //initializing values
    index = 0;
    subtotal = 0.00;

    //entering item numbers
    while (index < NumItems) { //ensuring the select number of items is ordered
        cout << "Enter the item number (1 - 8): ";
        cin >> itemNumber;
        while (itemNumber < 1 or itemNumber > 8) {
            cout << "Enter a valid item number (1 - 8): ";
            cin >> itemNumber;
        }
        cout << "How many do you want?: ";
        cin >> quantity;
        //adding total according to what is ordered
        switch (itemNumber) {
        case 1:
            amount = 45.00 * quantity;
            subtotal += amount;
            break;
        case 2:
            amount = 60.00 * quantity;
            subtotal += amount;
            break;
        case 3:
            amount = 50.00 * quantity;
            subtotal += amount;
            break;
        case 4:
            amount = 70.00 * quantity;
            subtotal += amount;
            break;
        case 5:
            amount = 90.00 * quantity;
            subtotal += amount;
            break;
        case 6:
            amount = 40.00 * quantity;
            subtotal += amount;
            break;
        case 7:
            amount = 25.00 * quantity;
            subtotal += amount;
            break;
        case 8:
            amount = 30.00 * quantity;
            subtotal += amount;
            break;
        default:
            break;
        }
        //increment index
        index += 1;
    }

    //calculating discount
    if (subtotal > 400.00) {
        discount = subtotal * 0.1;
    }

    //calculating final total
    finaltotal = subtotal - discount;

    cout << endl
        << endl;

    //displaying the bill
    cout << "---- Final Bill ----" << endl
        << "Subtotal: R" << subtotal << endl
        << "Discount: R" << discount << endl
        << "Final Total: R" << finaltotal;
        

    
}

