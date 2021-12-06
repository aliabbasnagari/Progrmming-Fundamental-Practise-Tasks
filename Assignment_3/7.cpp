#include <iostream>
#include <string>
using namespace std;

// Headers or signatures
void mainMenu();
void subBurgers();
void subPizzas();
void subSandwiches();
void finalResult(string, string, int, int);
void pizzaSizes();

// Main function
int main()
{
    // Declaring main variables
    int orderNo = 0, quantity = 0, billTotal = 0;
    string itemType = "", itemName = "";
    bool isInvalid = false;
    // Main Heading message
    cout << "Welcome!\n";
    cout << "What would you like to eat!\n";
    mainMenu(); // Call to Main Menu function
    // Taking choice from user
    cout << "Enter your choice: ";
    cin >> orderNo;
    // Switch between user choice
    switch (orderNo)
    {
    case 1:
        itemType = "Burger"; // store type of item
        subBurgers(); // Call to Burger types Menu function
        cout << "Enter your choice: ";
        cin >> orderNo;
        cout << "Enter quantity of the item: ";
        cin >> quantity; 
        switch (orderNo)
        {
        case 1:
            itemName = "Crispy Chicken Burger"; // store name of item
            billTotal = 600 * quantity; // Total bill
            finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
            break;
        case 2:
            itemName = "Beef Burger"; // store name of item
            billTotal = 650 * quantity; // Call to Final result generator function
            finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
            break;
        case 3:
            itemName = "Fish Burger"; // store name of item
            billTotal = 700 * quantity; // Call to Final result generator function
            finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
            break;
        default:
            cout << "Invalid choice!\n"; // Error Message in case of invalid choice
            break;
        }
        break;
    case 2:
        itemType = "Pizza"; // store type of item
        subPizzas(); // Call to Pizza types Menu function
        cout << "Enter your choice: ";
        cin >> orderNo;
        // Switch between user's choice of pizza types
        switch (orderNo)
        {
        case 1:
            itemName = "Chicken Tikka"; // store name of item
            pizzaSizes(); // Call to pizza size menu function
            cout << "Enter your choice: ";
            cin >> orderNo;
            cout << "Enter quantity of the item: ";
            cin >> quantity;
            // Switch between user's choice of pizza sizes
            switch (orderNo)
            {
            case 1:
                itemName = itemName + " > Small"; // Modifies Name of item based on size
                billTotal = 850 * quantity;
                finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
                break;
            case 2:
                itemName = itemName + " > Medium"; // Modifies Name of item based on size
                billTotal = 1200 * quantity;
                finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
                break;
            case 3:
                itemName = itemName + " > Large"; // Modifies Name of item based on size
                billTotal = 1600 * quantity;
                finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
                break;
            default:
                cout << "Invalid choice!\n"; // Error Message in case of invalid choice
                break;
            }
            break;
        case 2:
            itemName = "Chicken Fajita"; // store name of item
            pizzaSizes();
            cout << "Enter your choice: ";
            cin >> orderNo;
            cout << "Enter quantity of the item: ";
            cin >> quantity; 
            switch (orderNo)
            {
            case 1:
                itemName = itemName + " > Small"; // Modifies Name of item based on size
                billTotal = 850 * quantity;
                finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
                break;
            case 2:
                itemName = itemName + " > Medium"; // Modifies Name of item based on size
                billTotal = 1200 * quantity;
                finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
                break;
            case 3:
                itemName = itemName + " > Large"; // Modifies Name of item based on size
                billTotal = 1600 * quantity;
                finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
                break;
            default:
                cout << "Invalid choice!\n"; // Error Message in case of invalid choice
                break;
            }
            break;
        case 3:
            itemName = "Four Seasons";
            pizzaSizes();
            cout << "Enter your choice: ";
            cin >> orderNo;
            cout << "Enter quantity of the item: ";
            cin >> quantity; 
            switch (orderNo)
            {
            case 1:
                itemName = itemName + " > Small"; // Modifies Name of item based on size
                billTotal = 850 * quantity;
                finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
                break;
            case 2:
                itemName = itemName + " > Medium"; // Modifies Name of item based on size
                billTotal = 1200 * quantity;
                finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
                break;
            case 3:
                itemName = itemName + " > Large"; // Modifies Name of item based on size
                billTotal = 1600 * quantity;
                finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
                break;
            default:
                cout << "Invalid choice!\n"; // Error Message in case of invalid choice
                break;
            }
            break;
        default:
            cout << "Invalid choice!\n"; // Error Message in case of invalid choice
            break;
        }
        break;
    case 3:
        itemType = "Sandwich"; // store type of item
        subSandwiches();
        cout << "Enter your choice: ";
        cin >> orderNo;
        cout << "Enter quantity of the item: ";
        cin >> quantity; 
        // Switch between burger types
        switch (orderNo)
        {
        case 1:
            itemName = "Club"; // store name of item
            billTotal = 300 * quantity; // Total bill
            finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
            break;
        case 2:
            itemName = "Chicken"; // store name of item
            billTotal = 325 * quantity; // Total bill
            finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
            break;
        case 3:
            itemName = "Vegetables"; // store name of item
            billTotal = 315 * quantity; // Total bill
            finalResult(itemType, itemName, quantity, billTotal); // Call to Final result generator function
            break;
        default:
            cout << "Invalid choice!\n"; 
            break;
        }
        break;
    default:
        cout << "Invalid choice!\n"; // Error Message in case of invalid choice
        break;
    }
    return 0;
}

// Other Function
// Main Menu
void mainMenu()
{
    cout << "1-Burgers\n"; 
    cout << "2-Pizzas\n"; 
    cout << "3-Sandwiches\n"; 
}
// Burger Types
void subBurgers()
{
    cout << "1-Crispy Chicken Burger (600 Rs.)\n"; 
    cout << "2-Beef Burger (650 Rs.)\n"; 
    cout << "3-Fish Burger (700 Rs.)\n";
}
// Pizza Types
void subPizzas()
{
    cout << "1-Chicken Tikka\n"; 
    cout << "2-Chicken Fajita\n"; 
    cout << "3-Four Seasons\n";
}
// Pizza Sizes
void pizzaSizes()
{
    cout << "1-Small (850 Rs.)\n";
    cout << "2-Medium (1200 Rs.)\n";
    cout << "3-Large (1600 Rs.)\n"; 
}
// Sandwich Types
void subSandwiches()
{
    cout << "1-Club (300 Rs.)\n";
    cout << "2-Chicken (325 Rs.)\n";
    cout << "3-Vegetables (315 Rs.)\n";
}
// Final Result Generator
void finalResult(string type, string name, int quantity, int totalbill)
{
    cout << "---------------------------------------------------\n";
    cout << "You have ordered: " << type << " > " << name << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "---------------------------------------------------\n";
    cout << "Your total Bill is: " << totalbill << " Rs.\n";
}