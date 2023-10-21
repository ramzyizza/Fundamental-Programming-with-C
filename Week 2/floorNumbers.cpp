#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double number_01, number_after;
    cout << "Enter your number: "; 
    cin >> number_01;
    number_after = floor(number_01);
    cout << number_after << endl;
    
    return 0;
}
