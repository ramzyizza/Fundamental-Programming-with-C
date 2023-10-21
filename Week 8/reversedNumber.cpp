#include <iostream>
using namespace std;
// recursive function declaration with 1 parameters
int rev(int x);
// variables declaration
// x = number defined by users
int x;
int main()
{
    cout << "Input number to reverse: ";
    cin >> x; // value assigned to x
    cout << endl
         << "Reversed number are: " << rev(x); // recall the recursive function

    return 0;
}
// defining recursive function
int rev(int x)
{
    // % 10 used to inverse the number
    int reverse = x % 10;
    /*if only consist of 1 integer, output those integer itself*/
    if (x <= 9) // base case
        return x;
    // else, itterate and divide by 10 and automaticaly rounded to nearest int
    else
    { // recurrent case
        cout << reverse;
        rev(x / 10);
    }
}