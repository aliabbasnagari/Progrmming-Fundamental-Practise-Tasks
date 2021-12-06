#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setw(9) << setprecision(2) << 34.780 << endl; // part a
    cout << fixed << setw(5) << setprecision(3) << 7.0 << endl; // part b
    cout << fixed << 5.789e+12 << endl; // part c
    cout << left << setw(7) << 67 << endl; // part d

    return 0;
}
