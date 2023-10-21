#include <iostream>
using namespace std;
int main()
{

    int max_students;
    struct data
    {
        int std_id;
        int score_mid;
        int score_final;
    };

    cout << "Enter the number of students : ";
    cin >> max_students;
    data students_data[max_students];
    cout << endl;

    for (int i = 0; i < max_students; i++)
    {

        cout << "Enter Student's ID : ";
        cin >> students_data[i].std_id;

        cout << "Enter the Midterm Score : ";
        cin >> students_data[i].score_mid;

        cout << "Enter the Final Exam Score : ";
        cin >> students_data[i].score_final;
        cout << endl;
    }

    cout << "Recap Data for Students";
    cout << endl;
    for (int i = 0; i < max_students; i++)
    {

        cout << endl;
        cout << "Students ID : " << students_data[i].std_id << endl;
        cout << "Average : " << (students_data[i].score_final + students_data[i].score_mid) / 2 << endl;
    }

    return 0;
}