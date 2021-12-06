#include <iostream>
#include <iomanip>
using namespace std;

// Signatures of functions
float value_Conversions(float);
float length_Gtrain(float, float);
// Main function
int main()
{
    // Variable declaration
    float speed_Ptrain = 72, // Km/h
          speed_Gtrain = 54, // Km/h
          passengers_RelativeSpeed = speed_Ptrain + speed_Gtrain, // Km/h
          time_Seconds; // Seconds
    // Display messages
    cout << setfill('_') << setw(50) << "\n";
    cout << "The speed of passenger train is: " << speed_Ptrain << "(km/h) or " << value_Conversions(speed_Ptrain) << "(m/s) " << endl;
    cout << "The speed of goods train is: " << speed_Gtrain << "(km/h) or " << value_Conversions(speed_Gtrain) << "(m/s) " << endl;
    cout << setfill('_') << setw(50) << "\n";
    // User Inputs and message
    cout << "Enter the time taken by goods train to pass (in seconds): ";
    cin >> time_Seconds;
    // Final result display after fetching data from other functions
    cout << "The length of goods train is: " << length_Gtrain(value_Conversions(passengers_RelativeSpeed), time_Seconds) << " Meters " << endl;

}
// Function for converting speed in km/h to meters per seconds
float value_Conversions(float speed)
{
    float rspeed_Meters = (speed * 1000) / 3600; // Speed in meters per seconds

    return rspeed_Meters;
}
// Function for calculating goods train length
float length_Gtrain(float rSpeed, float seconds)
{
    float gtrain_Length = rSpeed * seconds; // distance formula s = v * t

    return gtrain_Length;
}
// End of program