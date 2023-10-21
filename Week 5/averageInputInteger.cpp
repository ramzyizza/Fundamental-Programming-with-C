#include <iostream>
using namespace std;
int i, num_limit;
double sum, avg;
int main() {
    
    cout << "How many integers? ";
    cin >> num_limit;
    
    int inputArray[num_limit];
    
    cout << "Write the integers seperated by spaces: ";
    
    for(i = 0; i < num_limit; i++) {
    cin >> inputArray[i];
    }
    
    sum = 0;
    for(int j = 0; j < num_limit; j++) {
    sum += inputArray[j];
    }
    
    cout << "The average is " << sum / num_limit << endl;
    return 0;
}