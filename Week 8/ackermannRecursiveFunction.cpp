#include <iostream>
using namespace std;
// recursive function declaration with 2 parameters
int ackerman(int m, int n);
int main()
{
    // declaration of variables
    int n, m;
    cout << "Input the value of M and N seperated by spaces: ";
    cin >> m >> n; // assign the defined value to m and n

    if (n >= 0 && m >= 0) // set to only receive positive integers
        cout << ackerman(m, n);
    else if (n < 0 || m < 0)
        cout << "Only receive positive integers!";
}
// defining recursive function
int ackerman(int m, int n)
{
    if (m == 0) // base case, if equals to 0
        return n + 1;
    else if (m > 0 && n == 0) // recurrent case with conditions
        return ackerman(m - 1, 1);
    else if (m > 0 && n > 0) // recurrent case with conditions
        return ackerman(m - 1, ackerman(m, n - 1));
}
