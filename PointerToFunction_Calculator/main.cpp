#include <iostream>
using namespace std;

int add(int a, int b) 
{
    return a + b;
}

int sub(int a, int b) 
{
    return a - b;
}

int main() 
{
    int x, y, choice;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "1.Add 2.Subtract: ";
    cin >> choice;

    int (*operation)(int, int);
    operation = (choice == 1) ? add : sub;

    cout << "Result: " << operation(x, y) << endl;

    return 0;
}
