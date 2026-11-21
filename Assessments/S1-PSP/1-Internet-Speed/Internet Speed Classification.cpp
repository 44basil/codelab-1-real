#include <iostream>
#include <string>
using namespace std;

//Gathers user input for internet speed

int getNum() {
    int num;
    cout << "Enter your internet speed (Mbps): ";
    cin >> num;
    return num;
}

// Displays internet classification table

void classificationTable() {

    cout << "This internet speed classification program is measured in Mbps (Megabits per second)." << endl;
    cout << "| Download speed | Descriptor |" << endl;
    cout << "|----------------|-----------------|" << endl;
    cout << "| 0 to 5 | Very slow broadband ----|" << endl;
    cout << "| 5 to 25 | Basic broadband |" << endl;
    cout << "| 26 to 49 | Standard broadband |" << endl;
    cout << "| 50 to 99 | Fast broadband |" << endl;
    cout << "| 101 to 499 | Superfast broadband |" << endl;
    cout << "| 500 to 999 | Ultrafast broadband |" << endl;
    cout << "| 1000+ | Gigabit broadband |" << endl;
}

int main() {

    classificationTable();
    int speed = getNum();

// If and else statements classify the internet speed based on the user input and outputs the relative broadband speed

    if (speed >= 0 && speed <= 5) {
        cout << "Your internet speed is classified as: Very slow broadband" << endl;
    }
    else if (speed >= 6 && speed <= 25) {
        cout << "Your internet speed is classified as: Basic broadband" << endl;
    }
    else if (speed >= 26 && speed <= 49) {
        cout << "Your internet speed is classified as: Standard broadband" << endl;
    }
    else if (speed >= 50 && speed <= 99) {
        cout << "Your internet speed is classified as: Fast broadband" << endl;
    }
    else if (speed >= 100 && speed <= 499) {
        cout << "Your internet speed is classified as: Superfast broadband" << endl;
    }
    else if (speed >= 500 && speed <= 999) {
        cout << "Your internet speed is classified as: Ultrafast broadband" << endl;
    }
    else if (speed >= 1000) {
        cout << "Your internet speed is classified as: Gigabit broadband" << endl;
    }
    else {
        cout << "Invalid input. Please enter a positive number." << endl;
    }
}