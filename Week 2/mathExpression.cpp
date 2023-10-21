#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long int num_input_user;
    long int num_calculate;
    cout << "Please input your number: ";
    cin >> num_input_user;
    num_calculate = num_input_user*(num_input_user+1)/2;
    cout << num_calculate << endl;
    
    return 0;
}