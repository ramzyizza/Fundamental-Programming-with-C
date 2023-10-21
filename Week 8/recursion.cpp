#include <iostream>
using namespace std;
// recursive function declaration with 2 parameters
int recursion(int a, int b);
// variables declaration
// a = N
// b = K
int a, b;
int main()
{
    cout << "Input the value of N : ";
    cin >> a; // value assigned to a
    cout << "Input the value of K : ";
    cin >> b; // value assigned to b

    if (a < b)
        cout << "The value of N has to be greater or equals to the K! ";
    else if (a >= 0 && b >= 0)   // set to only receive positive numbers
        cout << recursion(a, b); // recall the recursive function
    else if (a < 0 || b < 0)
        cout << "Binomial Coefficient only exist in positive integers! ";

    return 0;
}
// defining the recursive function
int recursion(int a, int b)
{
    if (a == 0 || b == 0)
        return 1; // base case, if either a or b are = 0
    else if (a == b)
        return 1; // case, if a are == to b
    else if (a != b)
        return recursion(a - 1, b - 1) + recursion(a - 1, b); // recurrent case
}
