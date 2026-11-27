#include <iostream>
#include <string>
using namespace std;

int main(){

    //Arrays store days of the week and the pace time for each day

    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    float  paceTimes[7];
    int totalSeconds = 0;
    int averageSeconds;

    //Gets user inputs

    cout << "Enter your pace time for each day of the week, measured in minutes and seconds (e.g Monday: 8.12): " << endl;
    for (int i = 0; i < 7; i++) {
        cout << days[i] << ": ";
        cin >> paceTimes[i];
        
        int minutes = (int)paceTimes[i];
        int seconds = (int)((paceTimes[i] - minutes) * 100);
        totalSeconds += (minutes * 60) + seconds;

        while (seconds < 0 || seconds >= 60) {
            cout << "Invalid input. Please enter a valid pace time in the correct format (e.g 8.12): ";
            cin >> paceTimes[i];
            minutes = (int)paceTimes[i];
            seconds = (int)((paceTimes[i] - minutes) * 100);
        }
    }

    averageSeconds = totalSeconds / 7;

    cout << "\nYou entered:\n" << endl;

    for (int i = 0; i < 7; i++) {
        cout << days[i] << ": " << paceTimes[i] << endl;
    }

    int averageMinutes = averageSeconds / 60;
    int remainingSeconds = averageSeconds % 60;

    cout << "\nYour average pace time for the week is: " << averageMinutes << " minutes and " << remainingSeconds << " seconds" << endl;

    return 0;
}