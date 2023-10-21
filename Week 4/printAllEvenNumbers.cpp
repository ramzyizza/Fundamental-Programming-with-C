#include <iostream>
using namespace std;
//declare variables
int number, even, odd, base_num;
int main(){
    //receive input from the users
    cout << "Input any positive integer number: ";
    cin >> number;
    
    //sort the interger value whether it's a even or odd
    if (number % 2 == 0){
    //if even, we dont need to substract by 1
    even = number - 0;
    base_num = even;
    }
    else {
    //if odd, we need to substract by 1 so the value is less then
    //or equal to the input number (even)
    odd = number - 1;
    base_num = odd;
    }
    //use nested for loops to iterate the number from the biggest even number
    //till == 0
    for (int i = 0; i <= base_num; i++)
    {
    if (i % 2 == 0)
    cout << base_num - i << " ";
    }
    return 0;
}

