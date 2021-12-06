#include <iostream>
#include <string>
using namespace std;

// Headers or signatures
int patternFinder(int);
string colorFinder(int);

// Main function 
int main()
{
    // Declaring variables
    int gridNumber1 = 0, gridNumber2 = 0, optionNo = 0;
    string gridColor = "";

    // Display initial messages and take user input
    cout << "1: Enter the number of grid to find color.\n";
    cout << "2: Enter two numbers from grid to find if they are same in color or not.\n";
    cout << "Choose your option (1 or 2): ";
    cin >> optionNo;
    // Switch between user's choice
    switch (optionNo)
    {
        case 1:
            cout << "Enter grid number: ";
            cin >> gridNumber1;
            if (gridNumber1 > 0 && gridNumber1 < 82)
            {
                cout << "Color of the grid is: " << colorFinder(gridNumber1) << endl;  // Getting color of grid using colorFinder function
            } else
            {
                cout << "Number out of Range!\n"; // If user enter out of range number
            }
            
            break;
        case 2:
            cout << "Enter grid number 1: ";
            cin >> gridNumber1;
            cout << "Enter grid number 2: ";
            cin >> gridNumber2;
            if ((gridNumber1 > 0 && gridNumber1 < 82) && (gridNumber2 > 0 && gridNumber2 < 82))
            {
                // Checking if both number have same color or not
                if (colorFinder(gridNumber1) == colorFinder(gridNumber2))
                {
                    cout << "Colors of both squares is same!\n";
                } else
                {
                    cout << "Colors of the squares is not same!\n";
                }
            } else
            {
                cout << "One or Both Numbers are out of Range!\n"; // If user enter out of range number
            }
            break;
        default:
            cout << "Invalid option selected!\n"; // Error messasge
            break;
    }
    return 0;
}
// patternFinder function to check if grid number belongs to pattern 1 or 2
int patternFinder(int num)
{
    int pattern = 0;

    // Cases for each range of grid patterns
    switch(num)
    {
        // Ranges of pattern 1
        case 1 ... 9:
            pattern = 1;
            break;
        case 19 ... 27:
            pattern = 1;
            break;
        case 37 ... 45:
            pattern = 1;
            break;
        case 55 ... 63:
            pattern = 1;
            break;
        case 73 ... 81:
            pattern = 1;
            break;
        default:
            pattern = 2; // If number doesn't belong to pattern 1 it will be from pattern 2 
            break;
    }
    return pattern; // Returns the pattern of the grid number
}
// colorFinder function to check color of grid number
string colorFinder(int gridNo)
{
    string color = ""; // Store color
    if (patternFinder(gridNo) == 1) // Checking if the number belongs from 1st pattern
    {
        if (gridNo % 3 == 1)
        {
            color = "Grey";
        } else if(gridNo % 3 == 2)
        {
            color = "Blue";
        } else if (gridNo % 3 == 0)
        {
            color = "Red";
        } 
    } else if (patternFinder(gridNo) == 2) // Checking if the number belongs from 2nd pattern
    {
        if (gridNo % 3 == 1)
        {
            color = "Blue";
        } else if(gridNo % 3 == 2)
        {
            color = "Red";
        } else if (gridNo % 3 == 0)
        {
            color = "Grey";
        }
    }
    return color; // Returns the color of the grid number
}