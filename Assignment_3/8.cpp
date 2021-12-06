#include <iostream>
using namespace std;

// Headers or signatures
int notes_number(int, int, int, int);

// Main function
int main()
{
    // Variables
    int Amount = 0, pfNote =50;
    int Notes500 = 0, Notes100 = 0, Notes50 = 0, Notes20 = 0, Notes10 = 0, Notes05 = 0, Notes01 = 0;
    // Display message and user inputs
    cout << "Range of amount: Rs. 100 - Rs. 100000\n";
    cout << "Enter the Amount: ";
    cin >> Amount;
    cout << "Currency Notes: Rs. 500, Rs. 100, Rs. 50, Rs. 20, Rs. 10, Rs. 5, Rs. 1\n";
    cout << "Enter the currency note preference: ";
    cin >> pfNote;

    // Count prefered notes first using switch statement
    switch (pfNote)
    {
    case 1:
        Notes01 = notes_number(1, Amount, pfNote, Notes01);
        Amount = Amount - (Notes01 * 1);
        break;
    case 5:
        Notes05 = notes_number(5, Amount, pfNote, Notes05);
        Amount = Amount - (Notes05 * 5);
        break;
    case 10:
        Notes10 = notes_number(10, Amount, pfNote, Notes10);
        Amount = Amount - (Notes10 * 10);
        break;
    case 20:
        Notes20 = notes_number(20, Amount, pfNote, Notes20);
        Amount = Amount - (Notes20 * 20);
        break;
    case 50:
        Notes50 = notes_number(50, Amount, pfNote, Notes50);
        Amount = Amount - (Notes50 * 50);
        break;
    case 100:
        Notes100 = notes_number(100, Amount, pfNote, Notes100);
        Amount = Amount - (Notes100 * 100);
        break;
    case 500:
        Notes500 = notes_number(500, Amount, pfNote, Notes500);
        Amount = Amount - (Notes500 * 500);
        break;
    default:
        break;
    }

    // Count number of notes if they are not counted in above switch (if number of notes equals zero)
    if (Notes500 == 0)
    {
        Notes500 = notes_number(500, Amount, pfNote, Notes500);
        Amount = Amount - (Notes500 * 500);
    }

    if (Notes100 == 0)
    {
        Notes100 = notes_number(100, Amount, pfNote, Notes100);
        Amount = Amount - (Notes100 * 100);
    }

    if (Notes50 == 0)
    {
        Notes50 = notes_number(50, Amount, pfNote, Notes50);
        Amount = Amount - (Notes50 * 50);
    }
    
    if (Notes20 == 0)
    {
        Notes20 = notes_number(20, Amount, pfNote, Notes20);
        Amount = Amount - (Notes20 * 20);
    }

    if (Notes10 == 0)
    {
        Notes10 = notes_number(10, Amount, pfNote, Notes10);
        Amount = Amount - (Notes10 * 10);
    }

    if (Notes05 == 0)
    {
        Notes05 = notes_number(5, Amount, pfNote, Notes05);
        Amount = Amount - (Notes05 * 5);
    }

    if (Notes01 == 0)
    {
        Notes01 = notes_number(1, Amount, pfNote, Notes01);
        Amount = Amount - (Notes01 * 1);
    }

    // Display final result
    cout << "Notes of 500    : " << Notes500 << endl;
    cout << "Notes of 100    : " << Notes100 << endl;
    cout << "Notes of 50     : " << Notes50 << endl;
    cout << "Notes of 20     : " << Notes20 << endl;
    cout << "Notes of 10     : " << Notes10 << endl;
    cout << "Notes of 5      : " << Notes05 << endl;
    cout << "Notes of 1      : " << Notes01 << endl;
    
    return 0;
}

// Function to count number of notes
int notes_number(int this_note, int amount, int pf_note, int note_no)
{
    int noNotes = 0;
    if ((amount / this_note) > 200 && pf_note == this_note && note_no == 0)
    {
        noNotes = 200;
    } else if(note_no == 0) {
        noNotes = amount / this_note;
    } else {
        noNotes = note_no;
    }
    return noNotes;
}