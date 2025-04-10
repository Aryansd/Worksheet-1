#include<iostream>
using namespace std;
class Bouncy
{
    public:
    int n;
    void input()
    {
        cout<<"Enter a  no: "<<endl;
        cin>>n;
    }
    void check()
    {
         if(n==0)
        {
            cout<<"Zero"<<endl;
            return;
        }
        else if(n<100)
        {
            cout<<"incorrect input"<<endl;
        }
       

        bool increase = false;
        bool decrease = false;
        int temp = n;
        int lastno=temp%10;//remainder of last dig
        temp/=10;//remove last dig
        while (temp > 0) {
            int digit = temp % 10;
            if (digit <lastno) {
                increase = true;
            } else if (digit > lastno) {
                decrease = true;
            } if(increase&&decrease){
             cout<<n<<"is a bouncy no!!"<<endl;
                return;
            }
            lastno = digit;//move next no
            temp /= 10;
        }  
            cout<<n<< " number is not bouncy." << endl;
    }
};  
int main() {
    Bouncy b;
    b.input();
    b.check();
    return 0;
}
