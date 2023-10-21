#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    string birth_month;
    int birth_day;
    
    cout << "Enter your Birth Day: ";
    cin >> birth_day;
    cout << "Enter you Birth Month: ";
    cin >> birth_month;
    
    if (birth_month == "March" && birth_day >= 21 || birth_month == "April" && birth_day 
    <= 19) {
    cout << "Your Zodiac is Aries";
    }
    else if (birth_month == "April" && birth_day >= 20 || birth_month == "May" && 
    birth_day <= 20) {
    cout << "Your Zodiac is Taurus";
    }
    else if (birth_month == "May" && birth_day >= 21 || birth_month == "June" && 
    birth_day <= 20) {
    cout << "Your Zodiac is Gemini";
    }
    else if (birth_month == "June" && birth_day >= 21 || birth_month == "July" && birth_day 
    <= 22) {
    cout << "Your Zodiac is Cancer";
    }
    else if (birth_month == "July" && birth_day >= 23 || birth_month == "August" && 
    birth_day <= 22) {
    cout << "Your Zodiac is Leo";
    }
    else if (birth_month == "August" && birth_day >= 23 || birth_month == "September" && 
    birth_day <= 22) {
    cout << "Your Zodiac is Virgo";
    }
    else if (birth_month == "September" && birth_day >= 23 || birth_month == "October" 
    && birth_day <= 22) {
    cout << "Your Zodiac is Libra";}
    else if (birth_month == "October" && birth_day >= 23 || birth_month == "November" && 
    birth_day <= 21) {
    cout << "Your Zodiac is Scorpio";
    }
    else if (birth_month == "November" && birth_day >= 22 || birth_month == "December" 
    && birth_day <= 21) {
    cout << "Your Zodiac is Sagittarius";
    }
    else if (birth_month == "December" && birth_day >= 22 || birth_month == "January" && 
    birth_day <= 19) {
    cout << "Your Zodiac is Capricorn";
    }
    else if (birth_month == "January" && birth_day >= 20 || birth_month == "February" && 
    birth_day <= 18) {
    cout << "Your Zodiac is Aquarius";
    }
    else if (birth_month == "February" && birth_day >= 19 || birth_month == "March" && 
    birth_day <= 20) {
    cout << "Your Zodiac is Pisces";
    }
    else cout << "Input Doesn't Match, Please Try Again" << endl;
    
    
    return 0;
}
