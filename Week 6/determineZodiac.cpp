#include <iostream>
#include <string>
using namespace std;
int main()
{

    // declare the struct data
    struct data
    {
        string month;
        int day;
    };
    // initialization for birth_data variable
    data birth_data[10];

    // receive input from the users
    cout << "Enter your Birth Day: ";
    cin >> birth_data[0].day;
    cout << "Enter you Birth Month: ";
    cin >> birth_data[0].month;

    // set the limit for the day no more than 31, if yes then output error
    if (birth_data[0].day >= 32 || birth_data[0].day <= 0)
        cout << "Input Doesn't Match, Please Try Again " << endl;

            else if (birth_data[0].month == "March" && birth_data[0].day >= 21 || birth_data[0].month ==
                                                                                          "April" &&
                                                                                      birth_data[0].day <= 19)
        {
            cout << "Your Zodiac is Aries";
        }
    else if (birth_data[0].month == "April" && birth_data[0].day >= 20 || birth_data[0].month ==
                                                                                  "May" &&
                                                                              birth_data[0].day <= 20)
    {
        cout << "Your Zodiac is Taurus";
    }
    else if (birth_data[0].month == "May" && birth_data[0].day >= 21 || birth_data[0].month ==
                                                                                "June" &&
                                                                            birth_data[0].day <= 20)
    {
        cout << "Your Zodiac is Gemini";
    }
    else if (birth_data[0].month == "June" && birth_data[0].day >= 21 || birth_data[0].month ==
                                                                                 "July" &&
                                                                             birth_data[0].day <= 22)
    {
        cout << "Your Zodiac is Cancer";
    }
    else if (birth_data[0].month == "July" && birth_data[0].day >= 23 || birth_data[0].month ==
                                                                                 "August" &&
                                                                             birth_data[0].day <= 22)
    {
        cout << "Your Zodiac is Leo";
    }
    else if (birth_data[0].month == "August" && birth_data[0].day >= 23 || birth_data[0].month ==
                                                                                   "September" &&
                                                                               birth_data[0].day <= 22)
    {
        cout << "Your Zodiac is Virgo";
    }
    else if (birth_data[0].month == "September" && birth_data[0].day >= 23 || birth_data[0].month == "October" && birth_data[0].day <= 22)
    {
        cout << "Your Zodiac is Libra";
    }
    else if (birth_data[0].month == "October" && birth_data[0].day >= 23 || birth_data[0].month ==
                                                                                    "November" &&
                                                                                birth_data[0].day <= 21)
    {
        cout << "Your Zodiac is Scorpio";
    }
    else if (birth_data[0].month == "November" && birth_data[0].day >= 22 || birth_data[0].month == "December" && birth_data[0].day <= 21)
    {
        cout << "Your Zodiac is Sagittarius";
    }
    else if (birth_data[0].month == "December" && birth_data[0].day >= 22 || birth_data[0].month ==
                                                                                     "January" &&
                                                                                 birth_data[0].day <= 19)
    {
        cout << "Your Zodiac is Capricorn";
    }
    else if (birth_data[0].month == "January" && birth_data[0].day >= 20 || birth_data[0].month ==
                                                                                    "February" &&
                                                                                birth_data[0].day <= 18)
    {
        cout << "Your Zodiac is Aquarius";
    }
    else if (birth_data[0].month == "February" && birth_data[0].day >= 19 || birth_data[0].month ==
                                                                                     "March" &&
                                                                                 birth_data[0].day <= 20)
    {
        cout << "Your Zodiac is Pisces";
    }
    else
        cout << "Input Doesn't Match, Please Try Again" << endl;

    return 0;
}