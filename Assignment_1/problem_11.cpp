#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float var_1, var_2, var_3; // Three Numbers
    cout << "var_1 :";
    cin >> var_1;
    cout << "var_2 :";
    cin >> var_2;
    cout << "var_3 :";
    cin >> var_3;
    
    // Headings
    cout << endl << left << setw(20) << "Variables" << setw(20) << "Numbers" << setw(20) << "Squares" << setw(20) << "Cubes" << "Half\n";
    
    // var_1 Operations
    cout << left << setw(20) << "Var_1" << setw(20) << var_1 << setw(20) << var_1 * var_1 << setw(20) << var_1 * var_1 * var_1 << var_1 / 2 << endl;
    
    // var_2 Operations
    cout << left << setw(20) << "Var_2" << setw(20) << var_2 << setw(20) << var_2 * var_2 << setw(20) << var_2 * var_2 * var_2 << var_2 / 2 << endl;
    
    // var_3 Operations
    cout << left << setw(20) << "Var_3" << setw(20) << var_3 << setw(20) << var_3 * var_3 << setw(20) << var_3 * var_3 * var_3 << var_3 / 2 << endl;

    
    return 0;
}
