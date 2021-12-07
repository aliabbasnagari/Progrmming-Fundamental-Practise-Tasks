/* Ali Abbas 21I-2503 */
#include <iostream>
using namespace std;

// Signatures
bool findPerfect(int); // Function to check if the number is perfect or not

// Main function
int main()
{
	
	int number = 0;
	// Take number from user
	cout << "Enter a number: ";
	cin >> number;
	cout << "_______________________\n";
	cout << "Perfect Numbers\n";
	
	// Loop to check all numbers with in range (max is number)
	for (unsigned int i = 1; i <= number; i++)
	{
		if (findPerfect(i))
		{
			cout << i << ", ";
		}
	}
	cout << endl;
	
	return 0;
}

// Perfect number checker by prime factors
bool findPerfect(int x)
{
	bool isPerfect = false;
	int i = 1, perfectc = 0;
	
	// Checking for factors and their sum
	for (int i = x-1; i > 0; i--)
	{
		if(x%i == 0)
		{
			perfectc += i;
		}
	}
	
	if (perfectc == x)
	{
		isPerfect = true; // Number is perfect
	} else
	{
		isPerfect = false; // Number is not perfect
	}
	return isPerfect;
}
// End of program
