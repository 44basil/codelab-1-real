#include <iostream>
#include <string>
using namespace std;

int main(){
    int numbers[5] = {1, 2, 3, 4, 5};
    string names[5];
    string lastNames[5];

    cout << "Enter 5 names: " << endl;
    for (int i = 0; i < 5; i++){
        cin >> names[i] >> lastNames[i];
    }
    for (int i = 0; i < 5; i++){
        cout << numbers[i] << ". " << names[i] << " " << lastNames[i] << endl;
    }
}