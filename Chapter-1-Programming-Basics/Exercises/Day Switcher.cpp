#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Welcome to the Day Switcher! Pick a number from 1-7 corresponding to a day of the week!" << endl;

    int userNum = 0;

    cin >> userNum;
    
    switch (userNum) {
        case 1:
            cout << "You picked Monday! The first day of the week!" << endl;
            break;
        case 2:
            cout << "You picked Tuesday! CodeLab Today!" << endl;
            break;
        case 3:
            cout << "You picked Wednesday! The middle of the week!" << endl;
            break;
        case 4:
            cout << "You picked Thursday! We're almost at the end of the week!" << endl;
            break;
        case 5:
            cout << "You picked Friday! CodeLab Day and the last day of the week!" << endl;
            break;
        case 6:
            cout << "You picked Saturday! The weekend is here!" << endl;
            break;
        case 7:
            cout << "You picked Sunday! The weekend is over, back to work tomorrow!" << endl;
            break;
        default:
            cout << "Invalid selection. Please pick a number between 1 and 7." << endl;
    }
    return 0;
}