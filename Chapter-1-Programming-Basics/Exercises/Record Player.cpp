#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello! Pick a band!" << endl;
    cout << "1. Metallica" << endl;
    cout << "2. Queen" <<endl;
    cout << "3. The Amazons" << endl;
    cout << "4. Zeal & Ardor" << endl;

    // Keep the selection in main's scope so the switch can use it.
    int userNum = 0;
    cin >> userNum;

    switch (userNum) {
        case 1:
            cout << "You picked Metallica! Great choice!" << endl;
            break;
        case 2:
            cout << "Queen are a great band!" << endl;
            break;
        case 3:
            cout << "I love The Amazons!" << endl;
            break;
        case 4:
            cout << "Zeal & Ardor, great choice!" << endl;
            break;
        default:
            cout << "Invalid selection. Please pick a number between 1 and 4." << endl;
    }

return 0;
}