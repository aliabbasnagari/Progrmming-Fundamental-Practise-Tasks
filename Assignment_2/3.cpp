#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Signatures
float rhs(float);
float lhs(float);
void outputSeries(float);

// Main function
int main()
{
    // Declaring variables
    float angle_D, angle_R;
    const float pi = 3.14149;
    // User Inputs and messages
    cout << "Enter Angle in Degrees: ";
    cin >> angle_D;
    cout << setfill('_') << setw(50) << "\n";

    // Calculations
    angle_R = angle_D * (pi/180); // Angle from degrees to radians 
    // Final results
    cout << fixed;
    cout << "Left Hand Side Result is: " << lhs(angle_R) << endl;
    cout << "Right Hand Side Result is: " << rhs(angle_R) << endl;
    cout << "Difference between LHS and RHS is: " << rhs(angle_R) - lhs(angle_R) << endl;
    outputSeries(angle_R);

}
// cmath library used for sin, power, and factorial
// RHS series
float rhs(float angle)
{
    float value_RHS = angle - pow(angle, 3)/tgamma(4) + pow(angle, 5)/tgamma(6) - pow(angle, 7)/tgamma(8) + pow(angle, 9)/tgamma(10);
    return value_RHS;
}
// LHS sin angle
float lhs(float angle)
{
    float value_LHS = sin(angle);
    return value_LHS;
}
// List of series
void outputSeries(float angle)
{
    // Decalring variables
    float firstTerm = angle,
          secondTerm = pow(angle, 3)/tgamma(4),
          thirdTerm = pow(angle, 5)/tgamma(6),
          fourthTerm = pow(angle, 7)/tgamma(8),
          fifthTerm = pow(angle, 9)/tgamma(10);
    // Outputs
    cout << "First Term: " << firstTerm << endl;
    cout << "Series of two Terms: " << firstTerm << " , " << secondTerm << endl;
    cout << "Series of three Terms: " <<firstTerm << " , " << secondTerm << " , " << thirdTerm << endl;
    cout << "Series of four Terms: " <<firstTerm << " , " << secondTerm << " , " << thirdTerm << " , " << fourthTerm << endl;
    cout << "Series of five Terms: " <<firstTerm << " , " << secondTerm << " , " << thirdTerm << " , " << fourthTerm << " , " << fifthTerm << endl;
    cout << setfill('_') << setw(50) << "\n";
}
// End of program