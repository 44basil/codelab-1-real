#include <iostream>
#include <string>
using namespace std;

void info (){
    int age;
    string foreName, surName, homeTown;

    cout << "Hello! What's your name?" << endl;
    cin >> foreName >> surName;
    cout << "Nice to meet you, " << foreName << " " << surName << "!" << endl;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "You are " << age << " years old!" << endl;
    cout << "Where are you from?" << endl;
    cin >> homeTown;
    cout << "Wow! You're from " << homeTown << ", that sounds like a lovely place!  " << endl;

}

int main(){

    info ();

    return 0;
}