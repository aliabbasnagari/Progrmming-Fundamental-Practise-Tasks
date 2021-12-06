#include <iostream>
#include <string>
#include <ctime>
using namespace std;

string fTeam(int);

int main(){

    srand(time(NULL)); // Function for randomising based on current time 
    // Variables
    int winner = 0, temp1 = 0, temp2 = 0, toss = 0, tossFinalist = 0;
    int T1_1 = 1, T2_1 = 2, T3_1 = 3, T4_1 = 4, T5_1 = 5, T6_1 = 6, T7_1 = 7, T8_1 = 8, T9_1 = 9, T10_1 = 10, T11_1 = 11, T12_1 = 12;

    // rand() function is used for random win situation and toss

    // Round One starts here
    cout << "Round One:" << endl;
    // Match 1 - Round 1
    cout << "Match 1: " << fTeam(T1_1) << " vs. " << fTeam(T7_1);
    T1_1 = (rand()%2 == 1) ? T1_1 : T7_1;
    cout << ", Won by " << fTeam(T1_1) << endl; // Calls to fTeam to find Name of Winner country
    // Match 2 - Round 1
    cout << "Match 2: " << fTeam(T2_1) << " vs. " << fTeam(T8_1);
    T2_1 = (rand()%2 == 1) ? T2_1 : T8_1;
    cout << ", Won by " << fTeam(T2_1) << endl; // Calls to fTeam to find Name of Winner country
    // Match 3 - Round 1
    cout << "Match 3: " << fTeam(T3_1) << " vs. " << fTeam(T9_1);
    T3_1 = (rand()%2 == 1) ? T3_1 : T9_1;
    cout << ", Won by " << fTeam(T3_1) << endl; // Calls to fTeam to find Name of Winner country
    // Match 4 - Round 1
    cout << "Match 4: " << fTeam(T4_1) << " vs. " << fTeam(T10_1);
    T4_1 = (rand()%2 == 1) ? T4_1 : T10_1;
    cout << ", Won by " << fTeam(T4_1) << endl;
    // Match 5 - Round 1
    cout << "Match 5: " << fTeam(T5_1) << " vs. " << fTeam(T11_1);
    T5_1 = (rand()%2 == 1) ? T5_1 : T11_1;
    cout << ", Won by " << fTeam(T5_1) << endl;
    // Match 6 - Round 1
    cout << "Match 6: " << fTeam(T6_1) << " vs. " << fTeam(T12_1);
    T6_1 = (rand()%2 == 1) ? T6_1 : T12_1;
    cout << ", Won by " << fTeam(T6_1) << endl;

    // Round Two starts here
    cout << "\nRound Two:" << endl;
    // Match 1 - Round 2
    cout << "Match 7: " << fTeam(T1_1) << " vs. " << fTeam(T4_1);
    T1_1 = (rand()%2 == 1) ? T1_1 : T4_1;
    cout << ", Won by " << fTeam(T1_1) << endl;
    // Match 2 - Round 2
    cout << "Match 8: " << fTeam(T2_1) << " vs. " << fTeam(T5_1);
    T2_1 = (rand()%2 == 1) ? T2_1 : T5_1;
    cout << ", Won by " << fTeam(T2_1) << endl;
    // Match 3 - Round 2
    cout << "Match 9: " << fTeam(T3_1) << " vs. " << fTeam(T6_1);
    T3_1 = (rand()%2 == 1) ? T3_1 : T6_1;
    cout << ", Won by " << fTeam(T3_1) << endl;

    // Round Three (Round Robin) starts here
    cout << "\nRound Three (round-robin):" << endl;
    // Match 1 - Round 3
    cout << "Match 10: " << fTeam(T1_1) << " vs. " << fTeam(T2_1);
    temp1 = (rand()%2 == 1) ? T1_1 : T2_1; // Store winner in temp variable
    cout << ", Won by " << fTeam(temp1) << endl;
    // Match 2 - Round 3
    cout << "Match 1: " << fTeam(T2_1) << " vs. " << fTeam(T3_1);
    T2_1 = (rand()%2 == 1) ? T2_1 : T3_1;
    cout << ", Won by " << fTeam(T2_1) << endl;
    // Match 3 - Round 3
    cout << "Match 12: " << fTeam(T3_1) << " vs. " << fTeam(T1_1);
    T3_1 = (rand()%2 == 1) ? T3_1 : T1_1;
    T1_1 = temp1; // Assign value of temp variable to T1_1
    cout << ", Won by " << fTeam(T3_1) << endl;

    // 
    if ((T1_1 == T2_1) || (T2_1 == T3_1))
    {
        // Final Match case I starts here
        cout << "\nFinal Match:" << endl;
        cout << "Match 13: " << fTeam(T1_1) << " vs. " << fTeam(T3_1);
        T1_1 = (rand()%2 == 1) ? T1_1 : T3_1;
        cout << ", Won by " << fTeam(T1_1) << endl;
    } else if ((T1_1 == T3_1) || (T2_1 == T3_1))
    {
        // Final Match case II starts here
        cout << "\nFinal Match:" << endl;
        cout << "Match 13: " << fTeam(T1_1) << " vs. " << fTeam(T2_1);
        T1_1 = (rand()%2 == 1) ? T1_1 : T2_1;
        cout << ", Won by " << fTeam(T1_1) << endl;
    } else 
    {
        // Toss for finalist team
        toss = rand()%3+1;
        temp1 = T1_1; // Store first team in temp variable

        if (toss == 1)
        {
            T1_1 = T1_1; // If toss is 1 finalist team T1_1 will be assigned to T1_1
        } else if(toss == 2)
        {
            T1_1 = T2_1; // If toss is 2 finalist team T2_1 will be assigned to T1_1
            T2_1 = temp1; // temp value of T1_1 from temp variable will be assigned to T2_1
        } else if(toss == 3)
        {
            T1_1 = T3_1; // If toss is 3 finalist team T3_1 will be assigned to T1_1
            T3_1 = temp1; // temp value of T1_1 from temp variable will be assigned to T3_1
        }
        cout << "Team " << fTeam(T1_1) << " qualified for the final after winning the toss.\n";

        cout << "Match 13: " << fTeam(T2_1) << " vs. " << fTeam(T3_1);
        T2_1 = (rand()%2 == 1) ? T2_1 : T3_1;
        cout << ", Won by " << fTeam(T2_1) << endl;

        // Final Round case III starts here
        cout << "\nFinal Match:" << endl;
        cout << "Match 14: " << fTeam(T1_1) << " vs. " << fTeam(T2_1);
        T1_1 = (rand()%2 == 1) ? T1_1 : T2_1;
        cout << ", Won by " << fTeam(T1_1) << endl;
    }
    cout << "Congratulations to team " << fTeam(T1_1) << " for winning the T20 World Cup.\n";
    return 0;
}

// function to find name of winning country based on a specific integer number for each country
string fTeam(int i)
{
    string winner = "";
    // Switch between countries
    switch (i)
    {
        case 1:
            winner = "Afghanistan";
            break;
        case 2:
            winner = "Australia";
            break;
        case 3:
            winner = "Bangladesh";
            break;
        case 4:
            winner = "England";
            break;
        case 5:
            winner = "India";
            break;
        case 6:
            winner = "Ireland";
            break;
        case 7:
            winner = "Pakistan";
            break;
        case 8:
            winner = "Scotland";
            break;
        case 9:
            winner = "South Africa";
            break;
        case 10:
            winner = "Sri Lanka";
            break;
        case 11:
            winner = "West Indies";
            break;
        case 12:
            winner = "Zimbabwe";
            break;
        default:
            break;
    }
    return winner; // Returns winner country
}