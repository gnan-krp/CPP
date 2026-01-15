#include <iostream>
using namespace std;

void transpose(int mat[3][3], int t[3][3]) 
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            t[j][i] = mat[i][j];
}

int main() 
{
    int mat[3][3], t[3][3];

    cout << "Enter 3x3 matrix elements:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> mat[i][j];

    transpose(mat, t);

    cout << "Transpose of the matrix:\n";
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++)
            cout << t[i][j] << " ";
        cout << endl;
    }

    return 0;
}
