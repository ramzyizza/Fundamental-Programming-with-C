#include <iostream>
using namespace std;
int num_int;
int main()
{

    cout << "How many integers? ";
    cin >> num_int;

    int array1[num_int];

    cout << "Write the integers separated by spaces: ";

    for (int i = 0; i < num_int; i++)
    {
        cin >> array1[i];
    }

    cout << "The smallest missing positive integer is ";

    for (int i = 1; i <= 100; i++)
    {
        int counter = 0;
        for (int j = 0; j < num_int; j++)
        {

            if (array1[j] == i)
            {
                counter = 1;
            }
        }
        if (counter != 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}