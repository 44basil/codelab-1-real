#include <iostream>
#include <string>
using namespace std;

int main () {
    string bookTitle, author;
    int publishedYear = 1597;

    
    cout << "What is your favourite book?" << endl;
    getline(cin, bookTitle);
    cout << bookTitle << " is a great book!" << endl;
    cout << "Who wrote " << bookTitle << "?" << endl;
    getline(cin, author);
    cout << "When was " << bookTitle << " published?" << endl;
    cin >> publishedYear;
    cout << "So " << bookTitle << " was written by " << author << " and published in " << publishedYear << "?" << endl;

    return 0;
}