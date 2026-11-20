#include <iostream>
#include <string>
using namespace std;

int main(){
    int numbers [12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    string months [12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    for (int i = 0; i < 12; i++){
        cout << numbers[i] << "." << months[i] << endl;
    }
};