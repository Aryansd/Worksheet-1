/*Write a C++ program to implement a number guessing game with different difficulty levels.
Easy difficulty ranges from 1-8, medium from 1-30, hard from 1-50.Then,generate a random number to check if the guess is correct based on the user's selection
*/
#include<iostream>
#include <cstdlib>  // library that helps generate random number
#include <ctime>  // library for random number from calander
using namespace std;
class GuessGame{
    public:
    int random,num;

    void easy(){
        random= rand() %8 +1;  
        cout<<"The number is between 1-8"<<endl;
        cout<<"Enter your number = ";
        cin>>num;
    }
    void medium(){
        random= rand() %30 +1;  
        cout<<"The number is between 1-30"<<endl;
        cout<<"Enter your number = ";
        cin>>num;
    }
    void hard(){
                random= rand() %50 +1;  
                cout<<"The number is between 1-50"<<endl;
                cout<<"Enter your number = ";
                cin>>num;
    }
    void display(){
        if (num==random)
                    {
                        cout<<"Congratulations! The no you guessed is correct :)"<<endl;
                    }
                    else
                    {
                    cout<<"Wrong number."<<endl;
                    cout<<"The correct number was = "<<random<<endl;
                    cout<< "Try again!! :( "<<endl;      
                    }
    }   
};

    int main(){
        int choice;
        cout<<"Welcome to guessing game!!"<<endl;
        cout<<"Enter the difficulty you want to play in : "<<endl;
        cout<<"Enter 1 for easy 1-8"<<endl;
        cout<<"Enter 2 for easy 1-30"<<endl;
        cout<<"Enter 3 for easy 1-50"<<endl;
        cin>>choice;
        srand (time(0));
        GuessGame g1;
        switch(choice){
        case 1 :
        g1.easy();
        g1.display();
        break;
        case 2 :
        g1.medium();
        g1.display();
        break;
        case 3 :
        g1.hard();
        g1.display();
        break;
        default :
        cout<<"Difficulty out of range!!!!!!"<<endl;
        break;
        }
        return 0;
    }