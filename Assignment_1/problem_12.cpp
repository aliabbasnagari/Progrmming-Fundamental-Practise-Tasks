#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char a;  // The Symbol in which the pattern is going to print
    cout << "Insert Desired symbol: ";
    cin >> a;
    
    // Shape 1 start
    cout << setfill(a) << setw(10) << a << endl;
    cout << setfill(' ') << a << setw(8) << a << endl;
    cout << setw(2) << a << setw(6) << a << endl;
    cout << setw(4) << a << a << endl;
    cout << setw(2) << a << setw(6) << a << endl;
    cout << a << setw(8) << a << endl;
    cout << setfill(a) << setw(10) << a << endl;
    // Shape 1 End
    // Shape 2 Start
    cout << setfill(a) << setw(17) << a << endl;
    cout << setfill(' ') << a << a << setw(13) << a << a << endl;
    cout << setfill(' ') << a << a << a << setw(11) << a << a << a << endl;
    cout << setfill(' ') << a << a << a << a << setw(9) << a << a << a << a << endl;
    cout << setfill(' ') << a << a << a << a << a << setw(7) << a << a << a << a << a << endl;
    cout << setfill(' ') << a << a << a << a << a << a << setw(5) << a << a << a << a << a << a << endl;
    cout << setfill(' ') << a << a << a << a << a << a << a << setw(3) << a << a << a << a << a << a << a << endl;
    cout << setfill(a) << setw(16) << a <<endl;
    // Shape 2 End
    // Shape 3 Start
    cout << setfill(' ') << setw(10) << a << endl;
    cout << setw(9) << a << a << endl;
    cout << setw(8) << a << a << a << a << endl;
    cout << setw(7) << a << a << a << a << a << a << endl;
    cout << setw(5) << a << a << a << a << a << a << a << a << a << a << endl;
    cout << setw(7) << a << a << a << a << a << a << a << endl;
    cout << setw(8) << a << a << a << a << endl;
    cout << setw(9) << a << a << endl;
    cout << setfill(' ') << setw(10) << a << endl;
    // Shape 3 End
    return 0;
}
