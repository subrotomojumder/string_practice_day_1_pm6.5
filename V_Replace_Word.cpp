#include <bits/stdc++.h>
using namespace std;

vector<string> splitString(string s, string delimiter)
{
    vector<string> result;
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != string::npos)
    {
        token = s.substr(0, pos);
        result.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    result.push_back(s);
    return result;
}

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
            
        }
        
    }

    return 0;
}