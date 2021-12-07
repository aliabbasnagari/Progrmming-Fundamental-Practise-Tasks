/* Ali Abbas 21I-2503 */
#include <iostream>
#include <cmath>
using namespace std;
 // Signatures of funcions
double calcTerm(int, int); // Function for calculating terms -> starts on line 30
double sumTerms(double); // Function for finding sum of terms -> starts on line 58
void testFunction(double, double); // Function for testing values -> starts on line 65

// Main Function
int main()
{
	// Assign variables
    	double ans = 0;
    	double x = 0, a = 0;

	// Output messages and user inputs
    	cout << "Enter angle in radians: "; // Take angle in radians
    	cin >> x;
    	cout << "Enter number of terms: "; // Take number of terms (defines precision of value)
    	cin >> a;
    	
    	// Loopf for find and sum each term
   	 for (int i = 1; i < a; i++)
    	{
    		ans = sumTerms(calcTerm(x, i)); // Storing sum of each term in ans
    	}
    	
    	// Display answer from series
    	cout << "cos(" << x << "): " << ans << " (approximately)" << endl;
    	testFunction(ans, x); // call for test function to compare values

}

// Function to find terms
double calcTerm(int x, int n)
{
    double powX = x, fact = (2 * n), sign = 1;
    double term = 0;

    //power x
    for (int i = 1; i < (n*2); i++)
    {
        powX *= x;
    }
    //  factorial
    for (int i = ((n*2) - 1); i > 0; i--)
    {
        fact *= (i);
    }
    // even or odd term number, determines sign of term
    if (n%2==0)
    {
        sign = 1;
    } else 
    {
        sign = -1;
    }

    term = sign * (powX / fact); // Term
    return term;
}

// Function to calculate sum of terms
double sumTerms(double term)
{
    static double sum_t = 1;
    sum_t += term;
    return sum_t;
}

// Function for comparing values
void testFunction(double ans, double x)
{
	cout << "______________________________________________\n";
	cout << "TEST:\n";
	cout << "Answer from maclurine series: " << ans << endl;
	cout << "Answer from cmath library: " << cos(x) << endl; // Finds value using cmath library
	cout << "______________________________________________\n";
}
// End of Program