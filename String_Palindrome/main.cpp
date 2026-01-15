#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int i = 0, j = str.length() - 1;
    int flag = 1;

    while(i < j) 
    {
        if(!isalpha(str[i])) { i++; continue; }
        if(!isalpha(str[j])) { j--; continue; }
        if(tolower(str[i]) != tolower(str[j])) 
        { 
            flag = 0; 
            break; 
        }
        i++; 
        j--;
    }

    if(flag) 
        cout << "Palindrome" << endl;
    else 
        cout << "Not Palindrome" << endl;

    return 0;
}
