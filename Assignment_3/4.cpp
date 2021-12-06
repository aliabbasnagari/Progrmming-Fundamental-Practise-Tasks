#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    // Variables
    bool isImaginary = false;
    char iota = 'i'; // iota greek letter represents complex numbers
    float a = 0, b = 0, c = 0, rootP1 = 0, rootP2 = 0, disc = 0;

    // User Inputs
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // Discriminant of quadratic equation
    disc = (pow(b, 2) - (4 * a * c));
    // Is imaginary or not
    isImaginary = (disc < 0) ? true : false;
    // Modify disciminant if it is imaginary
    disc = (isImaginary) ? -(disc) : disc;

    // 1st Part of root
    rootP1 = (-(b) / (2*a));
    // 2nd Part of root
    rootP2 =  sqrt(disc) / (2 * a);

    // Heading messages
    (isImaginary) ? cout << "The quadratic equation has imaginary roots\n" : cout << "The quadratic equation has real roots\n";
    cout << "_________________________________________\n";
    // Final Output (Roots)
    (isImaginary) ? cout << "x = " << rootP1 << " + " << rootP2 << " " << iota << endl 
                         << "x = " << rootP1 << " - " << rootP2 << " " << iota << endl
                  : cout << "x = " << rootP1 + rootP2 << endl
                         << "x = " << rootP1 - rootP2 << endl;

    return 0;
}