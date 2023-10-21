#include <iostream>
#include <iomanip>
using namespace std;
// declaration of variables
int n, i;
float gpa;
float total_sks = 0;
float total_score = 0;
// Set score for each grade letter
char A = 4.00;
char B = 3.00;
char C = 2.00;
char D = 1.00;
char E = 0.00;
// function declaration with 3 parameters
void calculate_gpa(char score_arr[], int sks_arr[], int n);
int main()
{

    // user determine the size of an array
    cout << "Input the amount of data (GPA) you want to compute : ";
    cin >> n;
    cout << endl;

    // array declaration
    char score_arr[n];
    int sks_arr[n];

    // function recall
    calculate_gpa(score_arr, sks_arr, n);
    // output the final calculation in decimal
    cout << "GPA = ";
    cout << showpoint << setprecision(2) << gpa << endl;

    return 0;
}
// defining the function
void calculate_gpa(char score_arr[], int sks_arr[], int n)
{

    // program to receive input
    for (i = 1; i <= n; i++)
    {
        cout << "Input the Score " << i << " : ";
        cin >> score_arr[i];
        cout << "Input the number of semester credits for each courses : ";
        cin >> sks_arr[i];
        cout << endl;
    }
    // program to compute the GPA
    for (i = 1; i <= n; i++)
    {
        total_score += (score_arr[i] * sks_arr[i]);
        total_sks += score_arr[i];
    }
    gpa = total_score / total_sks;
}
