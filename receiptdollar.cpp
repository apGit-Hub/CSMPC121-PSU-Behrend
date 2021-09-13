#include <string> 
#include <iomanip> 
#include <iostream> 
using namespace std;

int main() {

    string items[3], insert;
    double price[3], insertd;

    //Insertion of the item names, aborts if the item's name is longer than 9 letters
    cout << "Enter the names of 3 one-word items to purchase (each name must be less than 10 letters long): \n";
    for (int i = 0; i < 3; i++) {
        cin >> insert;
        if (insert.length() >= 10) {
            cout << "This item is 10 or more letters long";
            return(0);
        }
        else items[i] = insert;
    }

    //Insertion of the item prices, aborts if the item's price is greater than or equal to $1000
    cout << "You have purchased 3 items. Enter their prices in US dollars (must be less than $1000): \n";
    for (int i = 0; i < 3; i++) {
        cin >> insertd;
        if (insertd >= 1000) {
            cout << "You entered an invalid price";
            return(0);
        }
        else price[i] = insertd;
    }
    double total = price[0] + price[1] + price[2];

    //Output of the reciept
    cout << "+---------+-------+\n|     RECEIPT     |\n+---------+-------+";

    for (int i = 0; i < 3; i++) {
        //Output of each item
        cout << "\n|" << setw(9) << left << items[i];
        cout << "|" << setw(15 - to_string(price[i]).length()) << right << "$" << setprecision(2) << fixed << price[i] << "|";
    }
    //Total output
    cout << "\n+---------+-------+\n|TOTAL:" << setw(15 - to_string(total).length()) << right << "$" << setprecision(2) << fixed << total << "|\n+---------+-------+";
}

/*
Enter the names of 3 one-word items to purchase (each name must be less than 10 letters long):

Candy

Sneakers

Cellphone

You have purchased 3 items. Enter their prices in US dollars (must be less than $1000):

.99

75

949.99

+---------+-------+

|     RECEIPT     |

+---------+-------+

|Candy    |  $0.99|

|Sneakers | $75.00|

|Cellphone|$949.99|

+---------+-------+

|TOTAL:   $1025.98|

+---------+-------+


*/
