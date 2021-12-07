/* Ali Abbas 21I-2503 */
#include <iostream>
#include <string>
using namespace std;

// Signatures
int binaryConv(int);
int octalConv(int);
string hexaConv(int);
char findHexa(int);
void printingFunction(int, int, string);

// Main Function
int main()
{
	// Variables, Messages, and user inputs
	int Num = 0;
	cout << "Enter a number (1-256): ";
	cin >> Num;
	
	// Call for functions to print in binary, octal and hexadecimal
	printingFunction(binaryConv(Num), octalConv(Num), hexaConv(Num));
    	cout << endl;
    	return 0;
}

// Function to convert decimal to binary
int binaryConv(int g)
{

    int z = 0, x = g;
    int i = 1;
    while(x!=0)
    {
        z += (x % 2) * i;
        x /= 2;
        i *= 10;
    }
    return z;
}

// Function to convert decimal to octal
int octalConv(int g)
{
    int z = 0, x = g;
    int i = 1;
    while(x!=0)
    {
        z += (x % 8) * i;
        x /= 8;
        i *= 10;
    }
    return z;
}

// Function to convert decimal to hexadecimal
string hexaConv(int g)
{
    string hexa = "";
    int z = 0, x = g;
    while(x!=0)
    {
       z = x % 16;
       hexa = findHexa(z) + hexa; // Storing hexadecimal in string 
       x /= 16;
    }
    return hexa;
}

// Function to find corresponding character for hexadecimal
char findHexa(int i)
{
    char C;

    switch (i)
    {
        case 0:
            C = '0';
            break;
        case 1:
            C = '1';
            break;
        case 2:
            C = '2';
            break;
        case 3:
            C = '3';
            break;
        case 4:
            C = '4';
            break;
        case 5:
            C = '5';
            break;
        case 6:
            C = '6';
            break;
        case 7:
            C = '7';
            break;
        case 8:
            C = '9';
            break;
        case 9:
            C = '9';
            break;
        case 10:
            C = 'A';
            break;
        case 11:
            C = 'B';
            break;
        case 12:
            C = 'C';
            break;
        case 13:
            C = 'D';
            break;
        case 14:
            C = 'E';
            break;
        case 15:
            C = 'F';
            break;
        default:
            break;
    }

    return C;

}

// Function to prinf converted values
void printingFunction(int b, int o, string h)
{
	cout << "\nNumber in Binary is: " << b;
	cout << "\nNumber in Octal is: " << o;
	cout << "\nNumber in Hexadecimal is: " << h;
}
// End of program
