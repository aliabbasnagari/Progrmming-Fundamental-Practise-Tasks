#include <iostream>
#include <iomanip>
using namespace std;

// Signatures of functions
int customerID(int);
int accountNumber(int);
int encryptNumber(int);
int decryptNumber(int);
// Main function
int main()
{
    //  Declaring Variables
    unsigned short int bitNumber;
    int encryptedNo;
    // User input and messages
    cout << "Enter your 16-bit Number: ";
    cin >> bitNumber;

    encryptedNo = encryptNumber(bitNumber); // Encrypted form of bitNumber
    // Final results output
    cout << setfill('_') << setw(50) << "\n";
    cout << "Your customer Id is: " << customerID(bitNumber) << endl; 
    cout << "Your account number is: " << accountNumber(bitNumber) << endl;
    cout << "Encrypted Number is: "<< encryptedNo << endl;
    cout << "Decrypted Number is: "<< decryptNumber(encryptedNo) << endl;
    cout << setfill('_') << setw(50) << "\n";
    return 0;
}
// Function for extracting customer id from the 16-bit number
int customerID(int no)
{
    int cID = no >> 9;
    return cID;
}
// Function for extracting account number from the 16-bit number
int accountNumber(int no)
{
    int accNO = no & 511;
    return accNO;
}
// Function for encrypting the 16-bit number
int encryptNumber(int no)
{
    int a = 5,
        b = 233,
        encNumber = (a * no) + b;
    return encNumber;
}
// Function for decrypting the 16-bit number
int decryptNumber(int no)
{
    int a = 5,
        b = 233,
        decNumber = (no - b) / a;
    return decNumber;
}
// End of program