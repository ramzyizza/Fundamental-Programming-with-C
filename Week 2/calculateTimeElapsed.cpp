#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int Time, Velocity, Distance;
    
    cout << "Enter Velocity (in Km/h): ";
    cin >> Velocity;
    cout << "Enter Distance (in Km): ";
    cin >> Distance;
    Time = Distance / Velocity;
    cout << "Time Elapsed: " << Time << " Hours" << endl;
    
    return 0;
}