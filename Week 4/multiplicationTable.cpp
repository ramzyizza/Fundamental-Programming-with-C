#include <iostream>
#include <iomanip> //library used for adjusting the spaces between numbers [setw()]
using namespace std;
//declare the each variables
int num_max; //number from user to define the maximum multiplication table
int i; //i used for the starting number (0)
int firstrow, secondrow; //variables used for making the first and second rows

int main() {
    //receive inputs from the user
    cout << "Insert the maximum number to calculate the multiplication table: ";
    cin >> num_max;
    // make a nested loops to make the table
    for (i = 0; i <= num_max; i++) {
    //statement used to make the first row of the table
    if (i == 0) {
    cout << setw(5) << " ";
    //for loop used to output the first row number from 0 till num_max
    for (firstrow = 0; firstrow <= num_max; firstrow++) { 
    cout << " " << setw(2) << firstrow << " ";
    }
    cout << setw(4) << " ";
    cout << endl;
    } 
    //nested for loops to output the number on each columns
    for (int j = 0; j <= num_max; j++) {
    //if statement to output number on each rows until num_max
    if (j == 0) {
    cout << setw(3)<< i << " -";
    }
    //output the number to fill each columns by multiplying x & y
    cout << setw(3) << (i * j) << " ";
    }
    //end of the line, repeats until the i = num_max
    cout << endl;
    }
    return 0;
}
