/* Ali Abbas 21I-2503 */
#include <iostream>
using namespace std;

// Signatures
int product(int, int);
void findValues(int, int, int);

// Main Function
int main()
{
	// Variables, Messages, and user inputs 
	int firstNumber, secondNumber, powNum;
	cout<<"Enter number 1: ";
	cin>>firstNumber;
	cout<<"Enter number 2: ";
	cin>>secondNumber;
	cout<<"Enter value of power: ";
	cin>>powNum;
	findValues(firstNumber, secondNumber, powNum); // Call for function to calculate values
	
	return 0;
}

// Function for finding product
int product(int no1, int no2)
{
	int result = 0;
	while (no2 > 0) 
	{
		if (no2 & 1) 
		{
			result += no1;
		}
		no1 = no1 << 1;
		no2 = no2 >> 1;
	}
	return result;
}

// Function for finding sum, difference, division and square
void findValues(int n1, int n2, int p)
{
	int x, y, t1 = n1, t2 = n2;
	x = n1;
	y = n2;
	while (n2 != 0)
	{
		int count = n1 & n2;
		n1 = n1 ^ n2;
		n2 = count << 1;
	}
	cout<<"Sum of two numbers "<< x <<" and "<< y <<" is: "<< n1 << endl;

	n1 = t1,
	n2 = t2;	
	x = n1; 
	y = n2;  
	while (n2 != 0)
	{
		int count = (~n1) & n2;
		n1 = n1 ^ n2;
		n2 = count << 1;
	}
	cout << "Difference of both numbers " << x << " and " << y << " is: " << n1 << endl;

	n1 = t1,
	n2 = t2;
	x = n1; 
	y = n2;  
	int result1 = 0;
	while (n2 > 0) 
	{
		if (n2 & 1) 
		{
			result1 += n1;
		}
		n1 = n1 << 1;
		n2 = n2 >> 1;
	}
	cout << "Product of both numbers " << x << " and " << y << " is: " << result1 << endl;
	
	n1 = t1,
	n2 = t2;
	x = n1; 
	y = n2;  
	int temp1 = 1;
	int result2 = 0;
	while(n2 <= n1) 
	{
		n2 <<= 1;
		temp1 <<= 1;
	}

	n1 = t1,
	n2 = t2;
	while(temp1 > 1)
	{
		n2 >>= 1;
		temp1 >>= 1;
		if(n1 >= n2)
		{
			n1 -= n2;
			result2 += temp1;
		}
	}
	cout << "Division of both numbers " << x << " and " << y << " is: " << result2 << endl;
	
	n1 = t1,
	n2 = t2;
	int temp2 = n1;
	int square = 0;
	int count = 0;
	
	while(temp2 > 0)
	{
		if((temp2 & 1) == 1)
		{
			square += n1 << count;
		}

		temp2 = temp2 >> 1;
		count++;
	}
	cout << "Square of the number " << n1 << " is = " << square << endl;

	n1 = t1,
	n2 = t2;
	int ans = 1;
	int mynum = n1;
	while (p > 0) 
	{
		int last_bit = (p & 1);
		if (last_bit) 
		{
			ans = product(ans, n1);
		}
		n1 = product(n1, n1);
		p = p >> 1;
	}
	cout << "Power of " << mynum << " is = " << ans	<< endl;
}
// End of program
