#include <time.h>
#include <iostream>
using namespace std;
// declaration of global variables
int sizeArray, amountData;
int main()
{

    cout << "Program to allow the user to determine amount of data to random and sort it " << endl
         << endl;
    cout << "Enter your desired amount of data to randomize and sort: ";
    cin >> amountData;          // input N as amount of data from user
    int arrayLarge[amountData]; // size declaration of an array
    cout << endl
         << "You have choosen to randomize and sort " << amountData << " data." << endl;

    // generate randomize number ranging from 1 - N (user defined)
    srand(time(NULL));
    // find the length of data by dividing the total size of data by 4 bytes (int)
    int lengthData = sizeof(arrayLarge) / sizeof(arrayLarge[0]);
    for (int i = 0; i < lengthData; i++)
    {
        arrayLarge[i] = rand() % amountData + 1;
    }

    cout << endl;

    // allow user to choose what type of method algorithm used to sort the random number
    int chooseMethod;
    cout << "1.) Sort the data in ascending using the insertion sort method. " << endl;
    cout << "2.) Sort the data in descending using the insertion sort method. " << endl;
    cout << "3.) Sort the data in ascending using the selection sort method. " << endl;
    cout << "4.) Sort the data in descending using the selection sort method. " << endl;
    cout << "Please choose one of these method to sort those numbers: ";
    cin >> chooseMethod;
    cout << "===========================================================";
    cout << endl;

    // algorithm for insertion method (ascending)
    if (chooseMethod == 1)
    {
        int j;
        // find the length of data by dividing the total size of data by 4 bytes (int)
        int lengthData = sizeof(arrayLarge) / sizeof(arrayLarge[0]), x;
        for (int i = 1; i < lengthData; i++)
        {
            j = i - 1;
            x = arrayLarge[i];
            // if sort ascending, arrayLarge[j] > x
            while (arrayLarge[j] > x && j >= 0)
            {
                arrayLarge[j + 1] = arrayLarge[j];
                j--;
            }
            arrayLarge[j + 1] = x;
        }
        cout << "The sorted sequence of the data in Ascending using the INSERTION SORT ALGORITHM : " << endl;
                        for (int i = 0; i < lengthData; i++)
        {
            cout << arrayLarge[i] << " ";
        }
    }
    // algorithm for insertion method (descending)
    else if (chooseMethod == 2)
    {
        int j;
        // find the length of data by dividing the total size of data by 4 bytes (int)
        int lengthData = sizeof(arrayLarge) / sizeof(arrayLarge[0]), x;
        for (int i = 1; i < lengthData; i++)
        {
            j = i - 1;
            x = arrayLarge[i];
            // if sort descending, arrayLarge[j] < x
            while (arrayLarge[j] < x && j >= 0)
            {
                arrayLarge[j + 1] = arrayLarge[j];
                j--;
            }
            arrayLarge[j + 1] = x;
        }
        cout << "The sorted sequence of the data in Descending using the INSERTION SORT ALGORITHM : " << endl;
                        for (int i = 0; i < lengthData; i++)
        {
            cout << arrayLarge[i] << " ";
        }
    }
    // algorithm for selection method (ascending)
    else if (chooseMethod == 3)
    {
        int low; // low variable used to find the smallest value
        int x;   // x as a temporary variable to swab the value
        int lengthData = sizeof(arrayLarge) / sizeof(arrayLarge[0]);
        for (int j = 0; j < lengthData; j++)
        {
            low = j;
            for (int i = j + 1; i < lengthData; i++)
            {
                // if sort ascending, arrayLarge[i] < arrayLarge[low]
                if (arrayLarge[i] < arrayLarge[low])
                {
                    low = i;
                }
            }
            // swab the value
            x = arrayLarge[j];
            arrayLarge[j] = arrayLarge[low];
            arrayLarge[low] = x;
        }
        cout << "The sorted sequence of the data in Ascending using the SELECTION SORT ALGORITHM : " << endl;
                        for (int j = 0; j < lengthData; j++)
        {
            cout << arrayLarge[j] << " ";
        }
    }
    // algorithm for selection method (descending)
    else if (chooseMethod == 4)
    {
        int low; // low variable used to find the smallest value
        int x;   // x as a temporary variable to swab the value
        int lengthData = sizeof(arrayLarge) / sizeof(arrayLarge[0]);
        for (int j = 0; j < lengthData; j++)
        {
            low = j;
            for (int i = j + 1; i < lengthData; i++)
            {
                // if sort descending, arrayLarge[i] > arrayLarge[low]
                if (arrayLarge[i] > arrayLarge[low])
                {
                    low = i;
                }
            }
            // swab the value
            x = arrayLarge[j];
            arrayLarge[j] = arrayLarge[low];
            arrayLarge[low] = x;
        }
        cout << "The sorted sequence of the data in Descending using the SELECTION SORT ALGORITHM : " << endl;
                        for (int j = 0; j < lengthData; j++)
        {
            cout << arrayLarge[j] << " ";
        }
    }
    else
    {
        cout << "Wrong input | Only receive input 1,2,3,4 !" << endl;
        return 0;
    }
}
