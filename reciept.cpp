#include <string> 
#include <iomanip> 
#include <iostream> 
using namespace std; 

int main(){ 
   
    string items[3], insert;
    double price[3], insertd;
    
    cout << "Enter the names of 3 one-word items to purchase (each name must be less than 10 letters long): \n";
    for(int i = 0; i < 3; i++){
        cin>>insert; 
        if (insert.length()>=10){ 
            cout<< "This item is 10 or more letters long";
            return(0);
        }
        else items[i] = insert;
    }
    cout<<"You have purchased 3 items. Enter their prices in US dollars (must be less than $1000): \n";
    for (int i = 0; i < 3; i++){
        cin>>insertd;
        if (insertd >= 1000){ 
            cout<<"You entered an invalid price";
            return(0);
        }
        else price[i]=insertd;
    }
    
    cout<<"+---------+-------+\n|     RECEIPT     |\n+---------+-------+";
    int total=price[0]+price[1]+price[2];
    for(int i=0; i<3; i++){ 
        cout<<"\n|"<<setw(9)<<left<< items[i];
        cout<<"|$"<<setw(6)<<right<<setprecision(2)<<fixed<<price[i]<<"|";
    }
    cout<<"\n+---------+-------+\n|TOTAL:    $"<< setw(6)<< setprecision(2)<<fixed<<total<<"|\n+---------+-------+";
}

/*
Enter the names of 3 one-word items to purchase (each name must be less than 10 letters long): 

Gum 

Flour 

Oranges

You have purchased 3 items. Enter their prices in US dollars (must be less than $1000): 

.75

6

19.99

+---------+-------+

|     RECEIPT     |

+---------+-------+

|Gum      |$  0.75|

|Flour    |$  6.00|

|Oranges  |$ 19.99|

+---------+-------+

|TOTAL:    $    26|

+---------+-------+

*/
