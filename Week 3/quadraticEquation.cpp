#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //Declare variables 
    long double a,b,c, det;
    
    //Cout and receive input from the users (A B C)
    cout << "Quadratic Equation = Ax^2 + Bx + C = 0" << endl;
    cout << "Input A, B, C, Respectively: ";
    cin >> a >> b >> c;
    
    //Calculate the Determinant
    det = ((b*b) - (4*a*c));
    
    cout << endl;
    
    if (det > 0)
    {
    cout << "x1: " << (-1*b + sqrt (det))/(2*a) << endl;
    cout << "x2: " << (-1*b - sqrt (det))/(2*a) << endl;
    }
    
    else if (det == 0)
    {
    cout << "x1: " << (-1*b /(2*a)) << endl;
    cout << "x2: " << (-1*b /(2*a)) << endl; 
    }
    
    else if (det < 0)
    {
    cout << "x1: " << (-1*b /(2*a)) + (sqrt(abs(-det)))/(2*a) << "i" << endl;
    cout << "x2: " << (-1*b /(2*a)) - (sqrt(abs(-det)))/(2*a) << "i" << endl; 
    }
    return 0;
}
