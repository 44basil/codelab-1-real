#include <iostream>
using namespace std;
//global variables for calculations
int num1, num2, total;
 
 
//declare functions here
 int add(int num1, int num2);
 int subtract(int num1, int num2);
 int divide(int num1, int num2);
 int multiply(int num1, int num2);
 
int main() {
    
    cout << "Welcome to the calculator" << endl;
    cout << "---------------------" << endl;
    
    
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;
    
    cin >> num1;
    
    cout << "Please enter a number" << endl;
    cout << "---------------------" << endl;
    cin >> num2;
    
    cout << "What calculation do you want to perform" << endl;
    cout << "1: Addition \n2: Subtraction\n3: Division\n4: Multiplication" << endl;
    
    int choice;
    cin >> choice;
    
    if(choice == 1){
        total = add(num1, num2);
    }else if(choice == 2){
        total = subtract(num1, num2);
    }else if(choice == 3){
        total = divide(num1, num2);
    }else if(choice == 4){
        total = multiply(num1, num2);
    }
    
    cout << "Result" << endl;
    cout << "---------------------" << endl;
    cout << total << endl;
 
 
    return 0;
}
 
 
//define functions here

int add(int num1, int num2){
    return num1 + num2;
}

int subtract(int num1, int num2){
    return num1 - num2;
}

int divide(int num1, int num2){
    return num1 / num2;
}

int multiply(int num1, int num2){
    return num1 * num2;
}