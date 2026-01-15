#include <iostream>
using namespace std;

struct Student
{
    int marks[5];
};

int main()
{
    Student s;
    int sum = 0;

    cout << "Enter 5 subject marks: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> s.marks[i];
        sum += s.marks[i];
    }

    float average = sum / 5.0;

    cout << "Average Marks = " << average << endl;

    return 0;
}
