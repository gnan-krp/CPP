#include <iostream>
using namespace std;

struct Point 
{
    int x, y;
};

int main() 
{
    Point p = {5, 10};
    Point *ptr = &p;

    cout << "Before modification: x=" << ptr->x << " y=" << ptr->y << endl;

    ptr->x += 5;
    ptr->y += 10;

    cout << "After modification: x=" << ptr->x << " y=" << ptr->y << endl;

    return 0;
}
