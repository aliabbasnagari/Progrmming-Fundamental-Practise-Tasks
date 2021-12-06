#include <iostream>
#include <iomanip>
using namespace std;

// Signatures of functions
float find_Circumference(float);
float speed_Meters_Minutes(float);
// Main function
int main()
{
    // Declare Variables
    float diameter_Wheel,
          cycle_Speed,
          revolutions;
    // Title
    cout << "Finding Revolutions rate\n";
    cout << setfill('_') << setw(50) << "\n";
    // Users Inputs
    cout << "What is the diameter of cycles wheel (centimeters): ";
    cin >> diameter_Wheel;
    cout << "What is the speed of cycle (km/h): ";
    cin >> cycle_Speed;
    // Calculations after fetching data from functions
    revolutions = speed_Meters_Minutes(cycle_Speed) / find_Circumference(diameter_Wheel); // Revolutions per minute;
    // Display final result
    cout << endl << "Revolutions: " << revolutions << " revolutions per minute." << endl;
    cout << "Complete Revolutions: " << (int) revolutions << " complete revolutions per minute." << endl;
    cout << setfill('_') << setw(50) << "\n";
    return 0;
}
// Function for finding circumference of wheel using diameter
float find_Circumference(float d)
{
    const float pi = 3.142;
    float circumference_wheel = pi * (d / 100); // Circumference in meters

    return circumference_wheel;
}
// Function for converting speed in km/h to meters per minutes
float speed_Meters_Minutes(float v)
{
    float speed = (v * 1000) / 60; // Speed in meters per minutes

    return speed;
}
// End of program