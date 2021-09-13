#include <string> 
#include <iomanip> 
#include <iostream> 
using namespace std; 

int main(){ 
   
    string items[3], insert;
    double price[3], insertd;
    
    //Insertion of the item names, aborts if the item's name is longer than 9 letters
    cout << "Enter the names of 3 one-word items to purchase (each name must be less than 10 letters long): \n";
    for(int i = 0; i < 3; i++){
        cin>>insert; 
        if (insert.length()>=10){ 
            cout<< "This item is 10 or more letters long";
            return(0);
        }
        else items[i] = insert;
    }
    
    //Insertion of the item prices, aborts if the item's price is greater than or equal to $1000
    cout<<"You have purchased 3 items. Enter their prices in US dollars (must be less than $1000): \n";
    for (int i = 0; i < 3; i++){
        cin>>insertd;
        if (insertd >= 1000){ 
            cout<<"You entered an invalid price";
            return(0);
        }
        else price[i]=insertd;
    }
    
    //Output of the reciept
    cout<<"+---------+-------+\n|     RECEIPT     |\n+---------+-------+";
    
    for(int i=0; i<3; i++){ 
        int wIndex;
        //Checks to see if there is a decimal point and how much space the price will take up
        if(to_string(price[i]).find(".")!=-1)
            wIndex=to_string(price[i]).length()-5;
        else wIndex = to_string(price[i]).length();
        //Output of each item
        cout<<"\n|"<<setw(9)<<left<< items[i];
        cout<<"|"<<setw(6-wIndex)<<right<<"$"<<setprecision(2)<<fixed<<price[i]<<"|";
    }
    //Total price
    double total=price[0]+price[1]+price[2];
    //Checks for a decimal point and how much space the total price will take up
    int wIndex;
        if(to_string(total).find(".")!=-1)
            wIndex=to_string(total).length()-5;
        else wIndex = to_string(total).length();
    //Total output
    cout<<"\n+---------+-------+\n|TOTAL:    "<< setw(7-wIndex)<<right<<"$"<<setprecision(2)<<fixed<<total<<"|\n+---------+-------+";
}
