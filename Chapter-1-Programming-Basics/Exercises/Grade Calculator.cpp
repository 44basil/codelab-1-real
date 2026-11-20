#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Welcome to the Grade Calculator! Please enter the amount of marks you received, up to 100" << endl;

    int marks;
    string name;
    cin >> marks;
    cout << "You received " << marks << " marks. Please enter your name." << endl;
    cin >> name;

    switch (marks / 10) {
        case 0: case 1: case 2: case 3:
            cout << name << "'s grade is an F." << " They scored " << marks << " marks." << endl;
            break;
        case 4:
            cout << name << "'s grade is an E." << " They scored " << marks << " marks." << endl;
            break;
       case 5:
            cout << name << "'s grade is a D." << " They scored " << marks << " marks." << endl;
            break;
        case 6:
            cout << name << "'s grade is a C." << " They scored " << marks << " marks." << endl;
            break;
        case 7:
            cout << name << "'s grade is a B." << " They scored " << marks << " marks." << endl;
            break;
        case 8: case 9: case 10:
            cout << name << "'s grade is an A." << " They scored " << marks << " marks." << endl;
            break;    
    }
    return 0;
}