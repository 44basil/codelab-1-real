#include <iostream>
using namespace std;

int main(){
    int userNum;

    cout << "Enter a number: ";
    cin >> userNum;

    // Check and get valid input
    while (cin.fail()){
        cout << "Invalid input. Please try again: ";
        cin.clear();
        cin.ignore(1000, '\n'); // Clear input buffer
        cin >> userNum; // Get new number
    }

    // Show number
    cout << "You number is: " << userNum << endl;
    return 0;
}