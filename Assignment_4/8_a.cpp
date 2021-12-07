/* Ali Abbas 21I-2503 */
#include <iostream>
using namespace std;

// Signatures
void printPattern();

// Main Functions
int main()
{
	printPattern(); // call to print function
	return 0;
}

// Function to prints the pattern
void printPattern()
{
	int i = 0, j = 22;
	while (i < 6)
	{
		int I = i;
		int J = j;
		// First half
		while (I != 0)
		{
			cout << "\\\\";
			I--;
		}
		I = i;
		// Second half
		while (J > 0)
		{
			cout << "!";
			J--;
		}
		// Third half
		while (I != 0)
		{
			cout << "//";
			I--;
		}
		cout << endl;
		j -= 4;
		i++;
	}	
}
// End of program
