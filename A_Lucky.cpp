#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string fast_three = s.substr(0, 3);
        string last_three = s.substr(3, 3);
        int fast_sum = 0, last_sum = 0;
        for (auto c : fast_three)
            fast_sum += (c - 48);
        for (auto c : last_three)
            last_sum += (c - 48);
        cout << (fast_sum == last_sum ? "YES" : "NO") << endl;
    }
    return 0;
}