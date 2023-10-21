#include <iostream>
using namespace std;
//declare variables
int num1, num2;
int main() {
    //receive input from the user
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    int multiple = num2;
    //use nested for loops to iterate the output 
    for (int i = 1; i <= num1; i++){
    
    //if the i == the multiples of 2nd integers then output *
    if (i == num2){
    cout << "* ";
    //after print out the *, we add the value of 2nd integer 
    num2 = num2 + multiple;
    }
    //if the i != to multiples of 2nd integer, then 
    //output reguler interger number
    else{
    cout << i << " ";
    }
    }
    
    return 0;
}