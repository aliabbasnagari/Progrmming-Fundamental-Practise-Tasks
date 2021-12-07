/* Ali Abbas 21I-2503 */
#include <iostream>
using namespace std;

// Signatures
void printPattern();

// Main Function
int main()
{
	printPattern(); // call to print function
	return 0;
}

// Function to prints the pattern
void printPattern()
{
	int counter = -1, spacesf = 26, spacesl = 0;
	for (int i = 0; i < 16; i++)
	{
		counter++;
		if (counter == 3)
		{
			spacesl += 5;
			spacesf -= 5;
			counter = 0;
		}
        
		for (int j = spacesf; j > 0; j--)
		{
			cout << ' ';
		}
		cout << '*';
		for (int k = 0; k < 5; k++)
		{
			if (i==0 || i == 3 || i == 6 || i == 9 || i == 12 || i == 15)
			{
				cout << '*';
			} else
			{
				cout << ' ';
			}
		}
		for (int l = spacesl; l > 0; l--)
		{
			if (i == 15)
			{
				cout << '*';
			} else
			{
				cout << ' ';
			}
		}
		cout << '*' << endl;     
	}
}
// End of program
