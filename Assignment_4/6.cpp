/* Ali Abbas 21I-2503 */
#include <iostream>
using namespace std;

// Signatures
void hotelManager(int);

// Main function
int main()
{
	// Variables, Messages, and user inputs
    	int noFloors = 0;
		while (noFloors < 1)
		{
			cout << "Enter number of Floors: ";
    		cin >> noFloors;
		}
    	hotelManager(noFloors); // call for function to find hotel status
    	return 0;
}

// Function to find the status of Hotel
void hotelManager(int nf)
{
	int noRooms = 0, rooms = 0, oRooms = 0;
    	for (int i = 0; i < nf; i++)
    	{
			while (noRooms < 10) // Should be greater then 10
			{
				cout << "Enter number of rooms on Floor " << i + 1 << ": ";
        		cin >> rooms;
			}
        	noRooms += rooms;
        	cout << "Enter number of rooms occupied on Floor " << i + 1 << ": ";
        	cin >> rooms;
       	 oRooms += rooms;
    	}
    	
    	// Final outputs
	cout << "__________________________________________________________\n";
    	cout << "Number of rooms in hotel: " << noRooms << endl;
	cout << "Occupied rooms in hotel: " << oRooms << endl;
	cout << "Unoccupied rooms in hotel: " << noRooms - oRooms << endl;
	cout << "Percentage of occupied rooms: " << ((oRooms * 1.0) / noRooms) * 100.0 << "% " << endl;
}
// End of Program
