#include <iostream>
using namespace std;
class employee
{
    char name[20];
    int id;
    
    public:
        void input(void);
        void display(void);
};
void employee::input(void)
{
    cout << "Enter Your Name = ";
    cin >> name;
    cout << "Enter Your ID No. = ";
    cin >> id;
}
void employee::display(void)
{
    cout << "Your Name Is = " << name << endl;
    cout << "Your IDno Is = " << id << endl;
}
int main()
{
    employee e;
    e.input();
    e.display();
    return 0;
}
