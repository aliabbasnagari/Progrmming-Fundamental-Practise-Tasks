/* Ali Abbas 21I-2503 */
#include <iostream>
#include <iomanip>
using namespace std;

// Signatures
float eValue(float, float);
double newPosition(double, double, double);
double newVelocity(double, double, double);

// Main functions
int main()
{
	// Variables, Messages, and user inputs 
    	const double t = 0.01, g = 9.8;
    	double vi = 0, v = 0, s = 0, T = 0;
    
    	cout << "Enter the initial velocity of canon: ";
    	cin >> vi;
	v = vi;
	cout << "________________________________________\n";
	
	// Loop to calculate till ball falls to ground
	while (s >= 0)
	{
		// Print values in each complete second
		cout << "Time taken: " << T << " s" << endl;
		cout << "Position from interval: " << s << " m" << endl;
		cout << "Position from equation: " << eValue(vi, T) << " m" << endl;
		cout << "________________________________________\n";
        
		for (int i = 1; i <= 100; i++)
		{
			s = newPosition(s, v, t); // call for calculate new position after time interval
			v = newVelocity(v, g, t); // call for calculate new velocity after time interval
			T += 0.01; // Counts time taken
			if (s <= 0)
			{
				break;
			}         
		}
	}
	
	// Plotting trajectory
	cout << "time |          trajectory\n";
	for (int i = 0; i <= T; i++)
	{
		cout << "   " << i << ": " << setw(eValue(vi, i)) << '*' << endl << endl;
	}
	return 0;
}

// Function to find new position after some time interval
double newPosition(double s, double v, double t)
{
	return s + (v * t);
}

// Function to calculate new velocity after time interval and action of gravity
double newVelocity(double v, double g, double t)
{
	return v - (g * t);
}

// Function to calculate position using equation 
float eValue(float v, float t)
{
	const float g = 9.8;
	return ((v * t) - ((0.5) * g) * (t * t));
}
// End of program
