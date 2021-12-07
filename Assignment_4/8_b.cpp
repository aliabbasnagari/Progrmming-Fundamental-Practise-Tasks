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
	for (int i = 0; i < 7; i++)
	{
		for (int j = 6-i; j > 0; j--)
		{
			cout << '*';
		}
		for (int k = i+1; k > 0; k--)
		{
			cout << " ";
		}
		for (int l = 6-i; l > 0; l--)
		{
			cout << "//";
		}
		for (int m = i; m > 0; m--)
		{
			cout << "\\\\";
		}
		for (int n = i+1; n > 0 ; n--)
		{
			cout << " ";
		}
		for (int o = 6-i; o > 0; o--)
		{
			cout << '*';
		}
		cout << endl;
	}	
}
// End Program
