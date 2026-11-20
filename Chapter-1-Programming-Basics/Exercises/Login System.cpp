#include <iostream>
#include <string>
using namespace std;

    int main(){
        string password = "1234password";
        string userInput;

        do{
            cout << "Enter your password:" << endl;
            cin >>userInput;
        }while(password != userInput);

        cout << "Welcome to the super secure banking area." << endl;

        return 0;
    }