#include <iostream>
#include <string>
using namespace std;

int main(){
    string userInput;
    cout << "Are we there yet?" << endl;
    cin >> userInput;
    do{
        cout << "Are we there yet?" << endl;
        cin >> userInput;
    }while(userInput == "N" || userInput == "n");

    return 0;
}