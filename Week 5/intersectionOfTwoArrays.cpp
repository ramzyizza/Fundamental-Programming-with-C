#include <iostream>
#include <string.h>
using namespace std;
int length_num;
int main()
{
    cout << "Insert the length of array: " << endl;
    cin >> length_num;

    int array1[length_num];
    int array2[length_num];

    cout << "\n";

    cout << "Enter elements of array 1: \n";
    for (int i = 0; i < length_num; i++)
    {
        cout << "Enter element a" << i + 1 << " : ";
        cin >> array1[i];
    }
    cout << endl;
    cout << "Enter elements of array 2: \n";
    for (int j = 0; j < length_num; j++)
    {
        cout << "Enter element b" << j + 1 << " : ";
        cin >> array2[j];
    }

    cout << endl;
    cout << "Intersection: \n";
    int counter = 0;
    int new_array[length_num];

    for (int i = 0; i < length_num; i++)
    {

        for (int j = 0; j < length_num; j++)
        {

            if (array1[i] == array2[j])
            {
                new_array[counter] = array2[j];
                counter++;
            }
        }
    }

    for (int i = 0; i < counter; i++)
    {

        cout << new_array[i] << endl;
    }

    return 0;
}