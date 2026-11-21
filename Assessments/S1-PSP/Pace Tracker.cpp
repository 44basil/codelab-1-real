#include <iostream>
#include <string>
using namespace std;

int main(){

    //Arrays store days of the week and the pace time for each day

    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    double paceTimes[7];

    cout << "Enter your pace time for each day of the week (e.g Monday: 8.12): " << endl;
    for (int i = 0; i < 7; i++) {
        cout << days[i] << ": ";
        cin >> paceTimes[i];
    }

    for (int i = 0; i < 7; i++) {
        cout << "You entered: " << days[i] << ": " << paceTimes[i] << endl;
    }
    return 0;
}