#include <iostream>
using namespace std;

void swapNums(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swap: x=" << x << " y=" << y << endl;
    swapNums(&x, &y);
    cout << "After swap: x=" << x << " y=" << y << endl;

    return 0;
}
