/*1.	Write a program that takes a temperature value from the user. It should then allow the user to choose between Celsius (C) and Fahrenheit (F) for conversion. After the user selection, it should then convert the entered temperature to the chosen scale and display the result.
Use appropriate data types for temperature and handle error like non-numeric input. 
Use the following formula for conversion:
F = (C x 9/5) + 32
C = (F - 32) x 5/9 
*/
#include<iostream>
using namespace std;
class conversion{
public:
    float temp,celsius,fahrenheit;
    int choice;
    void menu(){
    cout<<"Enter the temperature : "<<endl;
    cin>>temp;
    cout<<"Choose 1 for celsius and  2 for Fahrenheit"<<endl;
    cin>>choice;
    }

    void convert(){
        switch(choice){
            case 1:
            celsius=(temp - 32)*5/9;
            cout<<"The temperature in celsius is : "<<celsius<<endl;
            break;
            case 2:
            fahrenheit=(temp*9/5)+32;
            cout<<"The temperature in fahrenheit is : "<<fahrenheit<<endl;
            break;
            default:
            cout<<"Invalid Input"<<endl;
            break;
            }
    }
};

int main()
{
    conversion c1;
    c1.menu();
    c1.convert();
    return 0;
}