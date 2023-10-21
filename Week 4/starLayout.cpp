#include <iostream>
#include <iomanip>
using namespace std;
//declare variables
int rows, i, j, space;
int main()
{
    //receive input from the users (how many rows)
    cout << "Enter number of rows: ";
    cin >> rows;
    //nested for loops to iterate from 1 until == rows (number of rows, input from users)
    for(i = 1; i <= rows; i++)
    {
    //for loop to output spaces before outputing * 
    //spaces will decrease by 1 for each new line created 
    for(space = i; space < rows; space++)
    {
    cout << setw(2) << "";
    } 
    //for loop to output * after the spaces
    //* will increase by (2*i)-1 for each new line created
    //and will iterate until the condition is false or (j == 2*i - 1)
    for(j = 1; j <= (2 * i - 1); j++) 
    {
    cout << " *";
    }
    // after the for loops above evaluated as false, then it will make
    // a new line and continues to output stars until (i == rows)
    cout << endl;
    }
    return 0;
}

