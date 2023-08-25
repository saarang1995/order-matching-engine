#include <iostream>

using namespace std;

enum Status {Pending, Completed, Failed};
/*
This is the main function which needs to return int value
returning 0 means program ran successfully without errors
*/
int main() {
    Status progressStatus;
    progressStatus = Pending;
    cout << "Value of enum progressStatus : " << progressStatus;
    
    string name;
    const string species = "Human";
    // Cannot do this since it is a constant species = "test";
    cout << "Enter your name : ";
    cin >> name;
    cout << "Hello World!\n";
    cout << "Your name is : " << name << endl;
    cout << sizeof(int) << endl;
    return 0;
}