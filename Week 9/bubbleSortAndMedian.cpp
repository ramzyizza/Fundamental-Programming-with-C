#include <iostream>
#include <iomanip>
using namespace std;
// declaration of variable
int sizeArray, x;
int main()
{

    cout << "Program to receive N data from user then sort it and find the median" << endl;
    cout << "Algorithm used in this program is Bubble sorting method. " << endl;
    cout << "============================================================" << endl;
    // user detemine the size of an array
    cout << "Enter the amount of data you want to input: ";
    cin >> sizeArray;
    float array[sizeArray]; // array declaration with N size
    cout << endl;
    // receive N amount of input from user and assign to array
    for (int i = 0; i < sizeArray; i++)
    {
        cout << "Enter data " << i + 1 << ": ";
        cin >> array[i];
    }
    // use the bubble sorting algorithm to sort the data
    for (int j = 0; j < sizeArray - 1; j++)
    {
        for (int k = 0; k < sizeArray - 1; k++)
        {
            if (array[k] > array[k + 1])
            {
                // swab the value if array[n] > array[n+1]
                x = array[k];
                array[k] = array[k + 1];
                array[k + 1] = x;
            }
        }
    }
    // display the sorted sequence of data (bubble sort algorithm)
    cout << endl;
    cout << "The sequence of the data in ascending order is : ";
    for (int p = 0; p < sizeArray; p++)
    {
        cout << array[p] << " ";
    }
    cout << endl
         << endl;
    // display the median of data by accessing the mid value of an array
    int mid1, mid2;
    if (sizeArray % 2 == 0)
    {
        mid1 = (sizeArray / 2) - 1;
        mid2 = (sizeArray / 2);
        float total = (array[mid1] + array[mid2]) / 2;
        cout << "The median of the given data is: " << setprecision(3) << float(total) << endl;
    }
    else if (sizeArray % 2 == 1)
    {
        int mid = (sizeArray / 2);
        cout << "The median of the given data is: " << array[mid] << endl;
    }
    return 0;
}