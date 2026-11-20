#include<iostream>
#include<string>
using namespace std;

int main() {
    string currentDay;

    cout << "What day of the week is it?" << endl;
    cin >> currentDay;

    if (currentDay == "Monday") {
        cout << "Today is Monday, the first day of the week!" << endl;
    } else if (currentDay == "Tuesday") {
        cout << "Today is Tuesday, CodeLab Today!" << endl;
    } else if (currentDay == "Wednesday") {
        cout << "Today is Wednesday, the middle of the week!" << endl;
    } else if (currentDay == "Thursday") {
        cout << "Today is Thursday, we're almost at the end of the week!" << endl;
    } else if (currentDay == "Friday") {
        cout << "Today is Friday, CodeLab Day and the last day of the week!" << endl;
    }
    return 0;
}