#include <iostream>
using namespace std;

// Headers or signatures
void titles(int);
string mainMenu(int, int);
string admissionQueries(int);
string academicQueries();
string accountfeeQueries();
string itQueries();
string sportsQueries();
string takeQuery();

// Main function
int main(){
    int campusSelect = 1, queries = 1, queryID = 0;
    string usersQuery;

    // Initial Display menu
    cout << "Welcome to FAST-NUCES!\n"
         << "Press 1 for Islamabad campus.\n"
         << "Press 2 for Lahore campus.\n"
         << "Press 3 for Karachi campus.\n"
         << "Press 4 for Peshawar campus.\n"
         << "Press 5 for Faisalabad campus.\n"
         << "Press 0 to talk to an operator.\n";
    cout << "Select your option: ";
    cin >> campusSelect;

    // Using switch to make decisions based on campus selected
    switch (campusSelect)
    {
    case 0:
        cout << "Please wait to talk to the operator.\n";
        break;
    case 1:
        titles(campusSelect); // Call titles function
        cin >> queries;
        usersQuery = mainMenu(queries, campusSelect); // Call main menu function
        break;
    case 2:
        titles(campusSelect);
        cin >> queries;
        usersQuery = mainMenu(queries, campusSelect);
        break;
    case 3:
        titles(campusSelect);
        cin >> queries;
        usersQuery = mainMenu(queries, campusSelect);
        break;
    case 4:
        titles(campusSelect);
        cin >> queries;
        usersQuery = mainMenu(queries, campusSelect);
        break;
    case 5:
        titles(campusSelect);
        cin >> queries;
        usersQuery = mainMenu(queries, campusSelect);
        break;
    default:
        cout << "Invalid Option!.\n"; 
        break;
    }
    return 0;
}

// Titles Function
void titles(int sCampus)
{
    // Welcome Message base on selected campus
    switch (sCampus)
    {
    case 1:
        cout << "Welcome to Islamabad campus.\n";
        break;
    case 2:
        cout << "Welcome to Lahore campus.\n";
        break;
    case 3:
        cout << "Welcome to Karachi campus.\n";
        break;
    case 4:
        cout << "Welcome to Peshawar campus.\n";
        break;
    case 5:
        cout << "Welcome to Faisalabad campus.\n";
        break;
    
    default:
        break;
    }
    cout << "Press 1 for admission related queries.\n";
    cout << "Press 2 for academics related queries.\n";
    cout << "Press 3 for accounts and fees related queries.\n";
    cout << "Press 4 for information technology related queries.\n";
    // Eleminating sports option form Peshawar campus
    if (!(sCampus == 4))
        cout << "Press 5 for sports related queries.\n";

    cout << "Select your option: ";
}
// Main menu function
string mainMenu(int queries, int campus)
{
    string query = " ";
    // Switch between queries
    switch (queries)
    {
    case 1: 
        query = admissionQueries(campus);
        break;
    case 2: 
        query = academicQueries();
        break;
    case 3: 
        query = accountfeeQueries();
        break;
    case 4: 
        query = itQueries();
        break;
    case 5:
        // Eleminating sports queries form Peshawar campus
        if (!(campus == 4))
            query = sportsQueries();
        else
            cout << "If you know your desired extension, please dial it directly.\n";
        break;
    default:
        cout << "If you know your desired extension, please dial it directly.\n";
        break;
    }
    return query;
}
// Admission queries function
string admissionQueries(int sCampus)
{
    int whichQuery;
    // Including and deducting options based on selected campus 
    cout << "Press 1 for admission in school of computing.\n";
    cout << "Press 2 for admission in school of electrical engineering.\n";
    switch (sCampus)
    {
    case 1:
        cout << "Press 3 for admission in school of management sciences.\n";
        break;
    case 2:
        cout << "Press 3 for admission in school of management sciences.\n";
        cout << "Press 4 for admission in school of civil engineering.\n";
        cout << "Press 5 for admission in school of science and humanities.\n"; 
        break;
    case 3:
        cout << "Press 3 for admission in school of management sciences.\n";
        break;
    case 5:
        cout << "Press 3 for admission in school of management sciences.\n";
        cout << "Press 4 for admission in school of civil engineering.\n";
        cout << "Press 5 for admission in school of science and humanities.\n";
        break;
    
    default:
        break;
    }
    cout << "Select your option: ";
    cin >> whichQuery;
    return takeQuery(); // call to takeQuery function to take query from user
}
// Academics queries function
string academicQueries()
{
    int whichQuery;
    cout << "Press 1 to apply for a degree/transcript generation.\n";
    cout << "Press 2 to freeze your semester.\n";
    cout << "Press 3 to add/drop courses.\n";
    cout << "Select your option: ";
    cin >> whichQuery;

    return takeQuery();
}
// Accounts and fees queries function
string accountfeeQueries()
{
    int whichQuery;
    cout << "Press 1 for queries related to fee challan generation.\n";
    cout << "Press 2 to apply for financial aid.\n";
    cout << "Press 3 apply for a scholarship.\n";
    cout << "Select your option: ";
    cin >> whichQuery;

    return takeQuery();
}
// Information and Technology function
string itQueries()
{
    int whichQuery;
    string query = " ";
    cout << "Press 1 to apply for an email id generation.\n";
    cout << "Press 0 to talk to an IT expert.\n";
    cout << "Select your option: ";
    cin >> whichQuery;

    switch (whichQuery)
    {
    case 0:
        cout << "Please Wait\n";
        break;

    case 1:
        query = takeQuery();
        break;
            
    default:
        cout << "Invalid Option!.\n";
        break;
    }
    return query;
}
// Sports query function
string sportsQueries()
{
    int whichQuery;
    string query = " ";
    cout << "Press 1 to get a sports venue booked.\n";
    cout << "Press 0 to talk to a representative.\n";
    cout << "Select your option: ";
    cin >> whichQuery;

    switch (whichQuery)
    {
    case 0:
        cout << "Please Wait\n";
        break;

    case 1:
        query = takeQuery();
        break;
            
    default:
        cout << "Invalid Option!.\n";
        break;
    }
    return query;
}
// Take query function
string takeQuery()
{
    string query;
    cout << "Please enter your query: (user shall enter a text message here): "; 
    cin >> query;
    cout << "Your query is registered. We will get back to you soon.\n"; 
    return query;
}