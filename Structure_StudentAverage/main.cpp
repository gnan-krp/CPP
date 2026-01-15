#include <iostream>
using namespace std;

struct Student 
{
    string name;
    int marks[3];
};

int main() 
{
    Student s;
    cout << "Enter student name: ";
    cin >> s.name;

    cout << "Enter marks in 3 subjects: ";
    for(int i = 0; i < 3; i++)
        cin >> s.marks[i];

    int sum = 0;
    for(int i = 0; i < 3; i++)
        sum += s.marks[i];
