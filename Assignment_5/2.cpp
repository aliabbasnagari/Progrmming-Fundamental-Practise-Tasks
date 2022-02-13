/* Ali Abbas 21I-2503 */
#include <iostream>
#include <cmath>
using namespace std;

// Signatures
int countLeapYears(int);
int getDifference(int, int, int, int, int, int);

// Main Function
int main()
{
    // Declare variables
    const int SIZE = 50;
    int loanAmount = 0, noInst = 0, takenInsta = 0;
    float remaining = 0, avDue = 0, totalColl = 0, totalChar = 0, paid = 0;
    char choice = ' ';
    // // Declaring arrays 1D and 2D
    float amounts[2][SIZE] = {0}, penalty[SIZE] = {0}, balance[SIZE]  = {0};
    int noDays[SIZE] = {0};
    int days[2][SIZE] = {0}, months[2][SIZE] = {0}, years[2][SIZE] = {0};
    do
    {
         //  initialize 2D arrays with 0
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                amounts[i][j] = 0;
                days[i][j] = 0;
                months[i][j] = 0;
                years[i][j] = 0;

            } 
        }
        takenInsta = 0;

        // Display messages and user inputs
        cout << "Enter the amount of loan: ";
        cin >> loanAmount; // Amount of loan
        cout << "Enter the number of installments: ";
        cin >> noInst; // Number of installments

        remaining = loanAmount; // Amound left to be paid
        avDue = (loanAmount * 1.0) / noInst; // value of single installment
        takenInsta = 0; // number of Total installments

        // Assign initial installment value to specified number of installments
        for (int i = 0; i < SIZE; i++)
        {   
            if (remaining > 0)
            {
                amounts[1][i] = (loanAmount * 1.0) / noInst;
                remaining -= (loanAmount * 1.0) / noInst;
            }
        }
 
        for (int b = 0; b < SIZE; b++)
        {
            if (amounts[1][b] == 0)
            {
                break; // Exit loop if no due amount lefts
            }
            // Display messages and user inputs
            cout << "________________________________\n";
            /* cout << "Due amount is: " << dueAmount[b] << endl; use this to generate automatic due amount*/
            cout << "Enter Due Amount: ";
            cin >> amounts[1][b];
            cin.ignore();
            cout << "---Due date---\n";
            cout << "Enter Day: ";
            cin >> days[1][b];
            cout << "Enter Month: ";
            cin >> months[1][b];
            cout << "Enter Year: ";
            cin >> years[1][b];
            cout << "Enter paid amount: ";
            cin >> paid;
            cin.ignore();
            cout << "---paid date---\n";
            cout << "Enter Day: ";
            cin >> days[2][b];
            cout << "Enter Month: ";
            cin >> months[2][b];
            cout << "Enter Year: ";
            cin >> years[2][b];   

            amounts[2][b] = paid; // save all payments in array
            balance[b] = amounts[1][b] - paid; // left over balance
            noDays[b] = getDifference(days[1][b], months[1][b], years[1][b], days[2][b], months[2][b], years[2][b]); // Find no of days between two days   
            if (paid < amounts[1][b])
            {
                penalty[b] += (amounts[1][b] / 100) * 5; // Add penalty if paid less
            }
            if (noDays[b] > 0)
            {
                penalty[b] += (100 * noDays[b]); // Add penalty if paid late
            } else {
                noDays[b] = 0; // if paid earlier than due date
            }
            amounts[1][b+1] = amounts[1][b+1] + penalty[b] + balance[b]; // If due is left add, leftover in next due amount
            takenInsta++; // Installments counter

            cout << "--> Penalty: " << penalty[b] << "      balance: " << balance[b] << endl;
        }

        float thisColl = 0, thisChar = 0, thisPaid = 0, thisPenalty = 0, thisBalance = 0;
        for (int i = 0; i < takenInsta; i++)
        {
            thisColl += amounts[1][i]; // Total collection in this part
            thisPaid += amounts[2][i]; // Total paid in this part
            thisPenalty += penalty[i]; // Total penalty in this part
            thisBalance += balance[i]; // Total balance in this part
        }
        
        totalColl += thisColl; // Add collection of this part to total collections
        thisChar = thisColl - (takenInsta * avDue); // total charges in this part
        totalChar += thisChar; // Add charges of this part to total part

        // Print data in tabluar form
        cout << "S#       " << "DueAmount       " << "DueDate         " 
                 << "PaidAmount       " << "PaidDate       " 
                 << "No of Days         " << "Penalty       " << "Balance\n";
        cout << "___________________________________________________________________________________________________________________\n";
        for (int i = 0; i < takenInsta; i++)
        {
            cout << i+1 << "         " << amounts[1][i] << "           "
            << days[1][i] << "/" << months[1][i] << "/" << years[1][i] << "           "
            << amounts[2][i] << "           " << days[2][i] << "/" << months[2][i] << "/" <<  years[2][i]
            << "          " << noDays[i] << "                 " << penalty[i] << "           "
            << balance[i] << endl;
        }
        cout << "___________________________________________________________________________________________________________________\n";
        cout << "Total:" << thisColl << "                                " << thisPaid << "                                          "
             << thisPenalty << "                " << thisBalance << endl;
        cout << "charges: " << thisChar << endl;      

        cout << "Do you want to continue? (Y/N): ";
        cin.ignore();
        cin.get(choice);
        
    } while (choice == 'Y');

    // Print/Display total calculations
    cout << "Total collection: " << totalColl << endl;
    cout << "Total charges: " << totalChar << endl;
    return 0;
}

// finds/calculates leap years
int countLeapYears(int y)
{
    // An year is a leap year if it is a multiple of 4, multiple of 400 and not a multiple of 100.
    return y / 4
           - y / 100
           + y / 400;
}
 
// Days counter
int getDifference(int dd, int dm, int dy, int pd, int pm, int py)
{
    // Number of days in each month
    const int monthDays[12]
    = { 31, 28, 31, 30, 31, 30,
       31, 31, 30, 31, 30, 31 };

    // Count total number of days before due date
    long int n1 = dy * 365 + dd;
    for (int i = 0; i < dm - 1; i++)
    {
        n1 += monthDays[i];
    }
    // Every leap year is of 366 days, add a day for every leap year
    n1 += countLeapYears(dy);
 
    // Count total number of days before paid date
    long int n2 = py * 365 + pd;
    for (int i = 0; i < pm - 1; i++)
    {
        n2 += monthDays[i];
    }
    // Every leap year is of 366 days, add a day for every leap year
    n2 += countLeapYears(py);
 
    // return difference between two counts
    return (n2 - n1);
}