/* Ali Abbas 21I-2503 */
#include <iostream>
#include <iomanip>
using namespace std;

// Signatures
int findTerm(int, int); // Find terms

// Main function
int main()
{
	// Variables, Messages, and user inputs
	int x = 0, n = 0;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter n: ";
	cin >> n;
	cout << "_______________________\n";
	
	// Plot graph based on term returned from function
	for (int i = findTerm(x, n); i >= 0; i-=2)
	{
		if (i < 10) // Check for label
		{
			cout << 0;	
		}
		cout << i; // Prints labels of axis
		for (int j = x; j >= 0; j--)
		{
			if (i == findTerm(j, n)) // Checks for term value
			{
				for (int k = (2 + (j * 3)); k > 0; k--)
				{
					cout << " "; // Prints blanks
				}
				cout << "*"; // Spots value in graph
			}
		}
		cout << endl;
	}
	cout << "  ";
	for (int i = 0; i <= x; i++)
	{
		cout << "  " << i; // Prints labels of axis
	}
	cout << endl;
	
	return 0;
}

// Finds the term of function
int findTerm(int x, int n)
{
	// Implementation of function by breaking into parts
	int x1 = x, x2 = x;
	for (int i = 1; i < n; i++)
	{
		x1 = x1 * x;
	}
	for (int i = 1; i < n-1; i++)
	{
		x2 = x1 * x;
	}
	return x1 + x2;
}
// End of program