#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Signatures of functions
float distance_Z(float, float);
float time_X(float, float);
float time_Y(float, float);
float average_Velocity(float, float);
// Main function
int main()
{
    // Variable declaration
    float X, x_Speed, x_Time, Y, y_Speed, y_Time, Z, z_Speed, z_Minutes, z_Time, total_Distance, total_Time;
    // User inputs and messages
    cout << "Enter the distance of first path (km): ";
    cin >> X;
    cout << "Enter the speed during first path (m/s): ";
    cin >> x_Speed;
    cout << "Enter the distance of Second path (km): ";
    cin >> Y;
    cout << "Enter the speed during second path (km/h): ";
    cin >> y_Speed;
    cout << "Enter the speed during third path (km/h): ";
    cin >> z_Speed;
    cout << "Enter the duration of third path (minutes): ";
    cin >> z_Minutes;

    //Conversions
    x_Speed = (x_Speed / 1000) * 3600; // Convert meter per seconds to km/h
    z_Time = z_Minutes / 60; // Convert minutes to hours

    // Calculating values from functions
    x_Time = time_X(x_Speed, X);
    y_Time = time_Y(y_Speed, Y);
    Z = distance_Z(z_Speed, z_Time);

    // Calculations
    total_Distance = X + Y + Z;
    total_Time = x_Time + y_Time + z_Time;

    // Display Final result after calculating in function
    cout << setw(60) << setfill('_') << "_" << endl; // Separation line
    cout << "The average velocity during whole path is: " << average_Velocity(total_Distance, total_Time) << " km/h" << endl; // Result

}
// Function for calculating time taken in path X
float time_X(float speed, float distance)
{
    float x_Time = distance / speed;
    return x_Time;
}
// Function for calculating time taken in path Y
float time_Y(float speed, float distance)
{
    float y_Time = distance / speed;
    return y_Time;
}
// Function for calculating distance of path Z
float distance_Z(float speed, float time)
{
    float z_Distance = speed * time;
    return z_Distance;
}
// Function for calculating average velocity
float average_Velocity(float distance, float time)
{
    float velocity_Average = distance / time;
    return velocity_Average;
}
// End of program