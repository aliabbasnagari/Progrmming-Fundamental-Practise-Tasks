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
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i; j--)
		{
			cout << ' ';
		}
        
		for (int k = 0; k <= i; k++)
		{
			cout << '/';
		}
		cout << "**";
		for (int l = 0; l <= i; l++)
		{
			cout << '\\';
		}
		cout << endl;
	}

	cout << "+";
	for (int i = 0; i < 6; i++)
	{
		cout << "_*";
	}
	cout << "+\n";

	for (int i = 1; i <= 3; i++)
	{
		cout << '|';
		for (int j = 0; j < 2; j++)
		{
			for (int k = 3-i; k > 0; k--)
			{
				cout << '.';
			}
			for (int l = i; l > 0; l--)
			{
				cout << "/\\";
			}
			for (int m = 3-i; m > 0; m--)
			{
				cout << '.';
			}
		}
		cout << '|' << endl;
	}

	for (int i = 3; i > 0; i--)
	{
		cout << '|';
		for (int j = 0; j < 2; j++)
		{
			for (int k = 3-i; k > 0; k--)
			{
				cout << '.';
			}
			for (int l = i; l > 0; l--)
			{
				cout << "\\/";
			}
			for (int m = 3-i; m > 0; m--)
			{
				cout << '.';
			}
		}
		cout << '|' << endl;
	}

	cout << "+";
	for (int i = 0; i < 6; i++)
	{
		cout << "_*";
	}
	cout << "+\n";

	for (int i = 3; i > 0; i--)
	{
		cout << '|';
		for (int j = 0; j < 2; j++)
		{
			for (int k = 3-i; k > 0; k--)
			{
				cout << '.';
			}
			for (int l = i; l > 0; l--)
			{
				cout << "\\/";
			}
			for (int m = 3-i; m > 0; m--)
			{
				cout << '.';
			}
		}
		cout << '|' << endl;
	}

	for (int i = 1; i <= 3; i++)
	{
		cout << '|';
		for (int j = 0; j < 2; j++)
		{
			for (int k = 3-i; k > 0; k--)
			{
				cout << '.';
			}
			for (int l = i; l > 0; l--)
			{
				cout << "/\\";
			}
			for (int m = 3-i; m > 0; m--)
			{
				cout << '.';
			}
		}
		cout << '|' << endl;
	}

	cout << "+";
	for (int i = 0; i < 6; i++)
	{
		cout << "_*";
	}
	cout << "+\n";

	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i; j--)
		{
			cout << ' ';
		}
        
		for (int k = 0; k <= i; k++)
		{
			cout << '/';
		}
		cout << "**";
		for (int l = 0; l <= i; l++)
		{
			cout << '\\';
		}
		cout << endl;
	}
}
// End of program
