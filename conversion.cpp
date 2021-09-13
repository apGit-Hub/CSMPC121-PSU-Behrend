#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Setup for fahrenheit values
    double fahrenheit[6];
    cout << "Enter five temperature values in Fahrenheit: \n";
    cin >> fahrenheit[0] >> fahrenheit[1] >> fahrenheit[2] >> fahrenheit[3] >> fahrenheit[4];
    
    //Setup for the columns and fahrenheit to celsius conversions
    cout << setw(10) << right << "Fahrenheit" << setw(10) << right << "Celsius" << setw(15) << right << "Warning";
    for (int i = 0; i < 5; i++) {
        cout << "\n" << setw(10) << right << setprecision(2) << fixed << fahrenheit[i];
        cout << setw(10) << right << setprecision(2) << fixed << (fahrenheit[i] - 32) * (5.0 / 9);
        //Warning calculations
        if (((fahrenheit[i] - 32) * (5.0 / 9))<=0)
            cout << setw(15) << right << "<= Freezing!";
        else if (((fahrenheit[i] - 32) * (5.0 / 9))>=100)
            cout << setw(15) << right << ">= Boiling!";
        
    }
}
/*
Enter five temperature values in Fahrenheit: 

-999.99 32 98.6 212 999.99

Fahrenheit   Celsius        Warning

   -999.99   -573.33   <= Freezing!

     32.00      0.00   <= Freezing!

     98.60     37.00

    212.00    100.00    >= Boiling!

    999.99    537.77    >= Boiling!
*/
