#include <iostream>
using namespace std;
int main() {
    double num1;
    int num2;
    
    cout << "Enter your number: ";
    cin >> num1;
    
    num2 = num1;
    
    if (num2 == num1){
    cout << num1 << " Is a Integer Number.";
    }
    else {
    cout << num1 << " Is Not An Interger Number.";
    }
    
    return 0;
}
