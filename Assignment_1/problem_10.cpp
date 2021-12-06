#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float sales1, sales2, sales3, totalSales; // Input Values
    cout << "Enter the sales for day 1: ";
    cin >> sales1;
    cout << "Enter the sales for day 2: ";
    cin >> sales2;
    cout << "Enter the sales for day 3: ";
    cin >> sales3;
    totalSales = sales1 + sales2 + sales3; // total sales
    // Table
    cout << "\nSales Figures\n";
    cout << "_______________" << endl;
    cout << "Day 1:   " << sales1 << endl;
    cout << "Day 2:   " << sales2 << endl;
    cout << "Day 3:   " << sales3 << endl;
    cout << "Total:   " << totalSales << endl;

    return 0;
}
