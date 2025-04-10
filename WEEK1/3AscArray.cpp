//3.	Write a program that reads an array of integer numbers from the user and sorts the numbers in the ascending order. 
#include<iostream>
using namespace std;
class Ascending
{
    public:
    int num[10],i,j,ord;
    void input()
    {
        cout<<"Enter 10 numbers:"<<endl;
        for(i=0;i<10;i++)
        {
            cin>>num[i];
        }
    }
    void sort()
    {
        for(i=0;i<10;i++)
        {
            for(j=i+1;j<10;j++)
            {
                if(num[i]>num[j])
                {
                    ord=num[i];
                    num[i]=num[j];
                    num[j]=ord;
                }
            }
        }
    }                           
     void display()
        {
            cout<<"Numbers in ascending order are:"<<endl;
            for(i=0;i<10;i++)
            {
                cout<<num[i]<<" , ";
            }
        } 
 };                 
int main()
{
    Ascending a1;
    a1.input();
    a1.sort();
    a1.display();
    return 0;
}