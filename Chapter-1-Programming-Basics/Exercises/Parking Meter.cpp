#include <iostream>
#include <string>
using namespace std;

int main() {
    int userNum;
    double hourlyRate = 2.40;
    string entryTime;
    string cutOffTime = "18:00";

    cout << "Hello! Welcome to the car park!" << endl;
    cout << "The hourly rate before 18:00 is £" << hourlyRate << endl;
    cout << "If you enter after 18:00, the hourly rate is £" << hourlyRate / 2.40 << ".00" << endl;
    cout << "Please enter the time you entered the car park: " << endl;

    cin >> entryTime;

    double total = userNum * hourlyRate;

    if (entryTime > cutOffTime){  
        total = userNum * (hourlyRate / 2.40);
    }
    
    cout << "Please enter the number of hours you'll be parking for: " << endl;
    cin >> userNum;
    
    if (userNum == 1){
        cout << "Thank you! Your total charge for " << userNum << " hour of parking is: £" << total << endl;
    }else{ cout << "Thank you! Your total charge for " << userNum << " hours of parking is: £" << total << endl;
    }
   
    return 0;
}
