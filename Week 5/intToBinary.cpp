#include <iostream> 
using namespace std;
int i;
int array[500];
int number;

int main(){
    cout << "Insert a number : ";
    
    cin >> number;
    
    for (i = 0; number > 0; i++){
    array[i] = number % 2;
    number = number / 2;
    }
    
    cout << "The result of number " << number << " in binary is: " << endl;
    for (i = i - 1; i >= 0; i--){
    cout << array[i] << " ";
    }
    return 0;
}

