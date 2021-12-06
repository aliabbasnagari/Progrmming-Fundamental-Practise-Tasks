#include <iostream>
using namespace std;

// Headers or signatures
void cOutLook();
void cHumidity();
void cTemperature();
void cPrecipitate();
void cWindFactor();
void cVisibility();

// Main function
int main(){
    cout << "Welcome to trip advisor\n";
    cout << "_________________________\n";
    cOutLook(); // Call check Outlook function

    return 0;
}

// Check Outlook
void cOutLook()
{
    string outLook;
    cout << "Enter the outlook: ";
    cin >> outLook;
    if (outLook == "sunny")
    {
        cHumidity(); // Call check Humidity function
    } else if (outLook == "overcast")
    {
        cPrecipitate(); // Call check check Preciptate function
    }
    else if (outLook == "rain")
    {
        cVisibility(); // Call check Visibiluty function
    }
    
       
}

// Check Humidity
void cHumidity()
{
    int sHumid;
    cout << "Enter Humidity: ";
    cin >> sHumid;
    if (sHumid < 40)
    {
        cout << "Go for Trip!\n";
    }
    else if (sHumid >= 40 && sHumid < 60)
    {
        cTemperature(); // Call check Temperature function
    } else
    {
        cout << "Stay at Home!\n";
    }
    
}

// Check temperature
void cTemperature()
{
    string sTemper;
    cout << "Enter Temprature: ";
    cin >> sTemper;
    if (sTemper == "normal" || sTemper == "moderate")
    {
        cout << "Go for Trip!\n";
    }
    else
    {
        cout << "Stay at Home!\n";
    }
}

// Check Preciptate
void cPrecipitate()
{
    int cPreci;
    cout << "Enter chance of precipitation: ";
    cin >> cPreci;
    if (cPreci < 50)
    {
        cWindFactor(); // Call check Wind factor function
    } else
    {
        cout << "Stay at Home!\n";
    }
}

// Check Wind factor
void cWindFactor()
{
    string windF;
    cout << "Enter Wind Factor: ";
    cin >> windF;
    if (windF == "strong")
    {
        cout << "Stay at Home!\n";
    }
    else
    {
        cout << "Go for Trip!\n";
    }
}

// Check visibility
void cVisibility()
{
    string visibility;
    cout << "Enter visiblity: ";
    cin >> visibility;
    if (visibility == "normal")
    {
        cout << "Go for Trip!\n";
    } else
    {
        cout << "Stay at Home!\n";
    }
}