#include <iostream>
#include <string>
using namespace std;

int main () {
    int userNum;
    int userNum1;
    int total;

    cout << "Enter a number: " << endl;
    cin >> userNum;
    cout << "Thanks! Now enter a second number!" << endl;
    cin >> userNum1;
    total = userNum * userNum1;

    cout << userNum << " x " << userNum1 << " = " << total << endl;
    
    cout << "So the total of " << userNum << " multiplied by " << userNum1 << " is " << total << endl;

    return 0;
}