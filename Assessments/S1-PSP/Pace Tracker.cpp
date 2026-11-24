#include <iostream>
#include <string>
using namespace std;

int main(){

    //Arrays store days of the week and the pace time for each day

    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    double paceTimes[7];
    double total = 0;
    double average;

    //Gets user inputs

    cout << "Enter your pace time for each day of the week (e.g Monday: 8.12): " << endl;
    for (int i = 0; i < 7; i++) {
        cout << days[i] << ": ";
        cin >> paceTimes[i];

        total += paceTimes[i];
    }

    average = total / 7;

    cout << "\nYou entered:\n" << endl;

    for (int i = 0; i < 7; i++) {
        cout << days[i] << ": " << paceTimes[i] << endl;
    }

    average = total /7;
    cout << "\nYour average pace time for the week is: " << average << endl;
    
    return 0;
}