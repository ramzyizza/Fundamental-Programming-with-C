#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int hour_1, minute_1, hour_2, minute_2, diff_hour, diff_minute, diff_convert, diff_total;
    
    cout << "Enter the 1st Hour (In 24h Format): ";
    cin >> hour_1;
    cout << "Enter the 1st Minute: ";
    cin >> minute_1;
    cout << "Enter the 2nd Hour (In 24h Format): ";
    cin >> hour_2;
    cout << "Enter the 2nd Minute: ";
    cin >> minute_2;
    
    diff_hour = hour_1 - hour_2;
    diff_minute = minute_1 - minute_2;
    diff_convert = diff_hour*60;
    diff_total = diff_convert + diff_minute;
    
    cout << endl;
    cout << "The difference between the two times is " << diff_total << " minutes"<< endl;
    
    return 0;
}
