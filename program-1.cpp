#include <iostream>
using namespace std;
class student
{
    char name[20];
    int age;
    
    public:
        void input(void);
        void display(void);
};
void student::input(void)
{
    cout << "Enter Your Name = ";
    cin >> name;
    cout << "Enter Your Age = ";
    cin >> age;
}
void student::display(void)
{
    cout << "Your Name Is = " << name << endl;
    cout << "Your Age Is = " << age << endl;
}
int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}
