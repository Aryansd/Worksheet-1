//4.	Write a program that reads a number from the user and based on the user input, it says what day of the week it is, 
// Sundays being 1 and Saturdays being 7. You system should give appropriate response for invalid input entries
#include<iostream>
using namespace std;
class Days
{
    public:
    int week;
    void display()
    {
        cout<<"Enter a number from 1 to 7 to know what day it is!!"<<endl;
        cin>>week; 
    }
    void num()
    {
    switch(week)
        {
            case 1:
            cout<<"The day is Sunday"<<endl;
            break;
            case 2:
            cout<<"The day is Monday"<<endl;
            break;
            case 3:
            cout<<"The day is Tuesday"<<endl;
            break;
            case 4:
            cout<<"The day is Wednesday"<<endl;
            break;
            case 5:
            cout<<"The day is Thursday"<<endl;
            break;
            case 6:
            cout<<"The day is Friday"<<endl;
            break;
            case 7:
            cout<<"The day is Saturday"<<endl;
            break;
            default:
            cout<<"Invalid Input"<<endl;
        }
    }
};
int main()
{
    Days d1;
    d1.display();
    d1.num();
    return 0;
}