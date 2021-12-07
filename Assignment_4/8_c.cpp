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
	for (int i = 1; i <= 9; i++)
	{
		for (int k = 0; k <= 8-i; k++)
		{
			cout << ' ';
		}
		for(int l = 1; l <= i; l++)
		{
			cout << l;
		}
		for (int m = i-1; m > 0; m--)
		{
			cout << m;
		}
		cout << endl;
	}
    
	for (int j = 8; j > 0; j--)
	{
		for (int n = 0; n <= 8-j; n++)
		{
			cout << ' ';
		}
		for(int o = 1; o <= j; o++)
		{
			cout << o;
		}
		cout << endl;
	} 
}
// End program
