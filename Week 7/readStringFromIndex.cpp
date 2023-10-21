#include <iostream>
using namespace std;
// declaration of function
void string_from_right(string st, int n);
// declaration of variables
int n;
string st;
int main()
{
    cout << "Input word : ";
    cin >> st;
    cout << "Input integer to read from the right to left : ";
    cin >> n;
    cout << endl;
    // recalling the function
    string_from_right(st, n);

    return 0;
}
// defining the function
void string_from_right(string st, int n)
{
    for (int i = st.length() - n; i < st.length(); i++)
    {
        cout << st[i];
    }
}