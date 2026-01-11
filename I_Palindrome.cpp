#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool ispalin = true;
    int size = s.size();
    for (int i = 0; i < (size - 1) / 2; i++)
    {
        if (s[i] != s[size - i - 1])
        {
            ispalin = false;
            break;
        }
    }
    ispalin ? cout << "YES" : cout << "NO";
    return 0;
}