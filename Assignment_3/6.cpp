#include <iostream>
using namespace std;

// Headers or signatures
void calculateBill();
float pkgOneBill(float);
float pkgTwoBill(float);
float pkgThreeBill();
void packageSaving();

// Main function
int main()
{   
    int choice= 0; // Variable storing choice of user
    // Initial Messages and user input
    cout << "Welcome to IFone customer care\n";
    cout << "Enter 1 to calculate monthly bill.\nEnter 2 to see saving from other packages.\n";
    cout << "Select your option: ";
    cin >> choice;
    // Switch between choice of user
    switch (choice)
    {
    case 1:
        calculateBill(); // Call for calculate bill
        break;
    case 2:
        packageSaving(); // Call for package savings
        break;
    default:
        cout << "Invalid choice!\n"; // If user enters wrong choice
        break;
    }
    return 0;
}
// Function for calculating bill
void calculateBill()
{
    // Variables
    float usedGB = 0, dataMBs = 0;
    int sPackage;
    // Output messages and user input
    cout << "How many GBs have you used in the month: ";
    cin >> usedGB;
    cout << "____________________________________________________________________________\n";
    cout << "Package 1: For Rs. 100 per month, 1 GB data is provided. Additional data can be purchased for Rs. 20 per 100 MB.\n";
    cout << "Package 2: For Rs. 200 per month, 2.5 GB data is provided. Additional data can be purchased for Rs. 10 per 100 MB.\n";
    cout << "Package 3: For Rs. 1000 per month, unlimited access is provided.\n";
    cout << "Which package had you subscribed for: ";
    cin >> sPackage;
    dataMBs = usedGB * 1024; // Convert data from GB's to MB's

    cout << "____________________________________________________________________________\n";

    // Switch between users choice
    switch (sPackage)
    {
        case 1:
            cout << "Bill for this month is: Rs " << pkgOneBill(dataMBs) << endl; // Calculate bill if package 1 is subscribed, using pkgOneBill function
            break;
        case 2:
            cout << "Bill for this month is: Rs " << pkgTwoBill(dataMBs) << endl; // Calculate bill if package 2 is subscribed, using pkgTwoBill function
            break;
        case 3:
            cout << "Bill for this month is: Rs " << pkgThreeBill() << endl; // Calculate bill if package 3 is subscribed, using pkgThreeBill function
            break;
        default:
            cout << "Invalid choice!\n"; // In case of invalid choice
            break;
    }
}

// Function to check savings from other packages
void packageSaving()
{
    // Variables
    float usedGB = 0, dataMBs = 0, saving1 = 0, saving2 = 0;
    int sPackage = 0;
    // Output messages and user input
    cout << "How many GBs have you used in the month: ";
    cin >> usedGB;
    cout << "____________________________________________________________________________\n";
    cout << "Package 1: For Rs. 100 per month, 1 GB data is provided. Additional data can be purchased for Rs. 20 per 100 MB.\n";
    cout << "Package 2: For Rs. 200 per month, 2.5 GB data is provided. Additional data can be purchased for Rs. 10 per 100 MB.\n";
    cout << "Package 3: For Rs. 1000 per month, unlimited access is provided.\n";
    cout << "Which package had you subscribed for: ";
    cin >> sPackage;
    dataMBs = usedGB * 1024; // Convert data from GB's to MB's

    cout << "____________________________________________________________________________\n";

    // Switch between user's choice
    switch (sPackage)
    {
    case 1:
        saving1 = pkgOneBill(dataMBs) - pkgTwoBill(dataMBs); // Calculating saving of shift from package 1 to 2
        saving2 = pkgOneBill(dataMBs) - pkgThreeBill(); // Calculating saving of shift from package 1 to 3
        if (saving1 > 0)
        {
            cout << "The Shift from Pakage 1 to 2 will save: Rs " << saving1 << endl; // If user can save
        } else {
            cout << "The Shift from Pakage 1 to 2 will lose: Rs " << -(saving1) << " (No Saving)" << endl; // If user can lose
        }
        if (saving2 > 0)
        {
            cout << "The Shift from Pakage 1 to 3 will save: Rs " << saving2 << endl; // If user can save
        } else {
            cout << "The Shift from Pakage 1 to 3 will lose: Rs " << -(saving2) << " (No Saving)" << endl; // If user can lose
        }
        break;
    case 2:
        saving1 = pkgTwoBill(dataMBs) - pkgThreeBill(); // Calculating saving of shift from package 2 to 3
        saving2 = pkgTwoBill(dataMBs) - pkgOneBill(dataMBs); // Calculating saving of shift from package 2 to 1
        if (saving1 > 0)
        {
            cout << "The Shift from Pakage 2 to 3 will save: Rs " << saving1 << endl; // If user can save
        } else {
            cout << "The Shift from Pakage 2 to 3 will lose: Rs " << -(saving1) << " (No Saving)" << endl; // If user can lose
        }
        if (saving2 > 0)
        {
            cout << "The Shift from Pakage 2 to 1 will save: Rs " << saving2 << endl; // If user can save
        } else {
            cout << "The Shift from Pakage 2 to 1 will lose: Rs " << -(saving2) << " (No Saving)" << endl; // If user can lose
        }
        break;
    default:
        cout << "Invalid choice!\n"; // In case of invalid choice 
        break;
    }
}

// Function for calculating bill of package 1 
float pkgOneBill(float datamb)
{
    float extraUsedMB, bill;
    if (datamb > 1024)
    {
        extraUsedMB = datamb - 1024; // Extra used MB's if user exceeds data limit
        bill = (100 + ((extraUsedMB / 100) * 20)); // Total bill if user exceede data limit
    } else {
        bill = 100; // Total bill if user did not exceede data limit
    }
    return bill;
}

// Function for calculating bill of package 2
float pkgTwoBill(float datamb)
{
    float extraUsedMB, bill;
    if (datamb > 2560)
    {
        extraUsedMB = datamb - 2560; // Extra used MB's if user exceeds data limit
        bill = (200 + ((extraUsedMB / 100) * 10)); // Total bill if user exceede data limit
    } else {
        bill = 200; // Total bill if user did not exceede data limit
    }
    return bill;
}

// Function for bill of package 3
float pkgThreeBill()
{
    return 1000; // Bill of package 3
}