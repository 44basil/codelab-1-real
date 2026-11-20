#include <iostream>
using namespace std;

int main(){
    double myNum = 20.0;
    while (myNum > 0){
        myNum-= 0.5;
        cout << myNum << endl;
    }
    return 0;
}