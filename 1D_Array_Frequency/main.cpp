#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int visited[n] = {0};

    for(int i = 0; i < n; i++) 
    {
        if(visited[i] == 1) 
          continue;
        int count = 1;
        for(int j = i+1; j < n; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                count++;
                visited[j] = 1;
            }
        }
        cout << "Element " << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}
