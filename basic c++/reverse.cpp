//reversing the string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: ";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    return 0;
}