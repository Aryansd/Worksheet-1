#include <iostream>
using namespace std;

class Cinema {
private:
    int seats[5][5]; 

public:
    Cinema() {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                seats[i][j] = 0;
        }
    }
    }
    void display() {
        cout << "**THE SEAT AVAILABLE ARE:**"<<endl;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (seats[i][j] == 0)
                    cout << "O "; 
                else
                    cout << "X ";  
            }
            cout << endl;
        }
    }
    void bookSeat() {
        int row, col;
        cout<< "Enter row (1-5) and column (1-5) to book a seat: ";
        cin>>row>>col;
        if(row < 1 || row > 5 || col < 1 || col > 5) {
        cout<< "Invalid seat selection! Please enter numbers between 1 and 5."<<endl;
        }
        else if (seats[row-1][col-1] == 'X') {  
            cout<<"This seat is already booked. Try another one."<<endl;
        }
        else {
            seats[row-1][col-1] = 'X';  
            cout<<"Seat booked successfully!"<<endl;    
        }
        }
};
int main() {
    Cinema c;
    int choice;
    do {
        cout << "1. View Available Seats"<<endl;
        cout << "2. Book a Seat"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter the choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                c.display();
                break;
            case 2:
            cout<<"**The seats marked X are already bookeed**"<<endl;
                c.bookSeat();
                c.display();  
                        break;
            case 3:
                cout << "Thank you!!"<<endl;;
                break;
            default:
                cout << " Only enter a number between 1 and 3."<<endl;
        }
    } while (choice != 3);
    return 0;
}
