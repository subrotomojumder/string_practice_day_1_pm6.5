#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string sub_str = "EGYPT";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E')
        {
            string c_string = s.substr(i, 5);
            if (sub_str == c_string)
            {
                s.replace(i, 5, " ");
            }
        }
    }
    cout << s;
    return 0;
}