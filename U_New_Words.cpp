#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string original = "EGYPT";
    int ori_size = original.size();
    int s_size = s.size();
    int carr[] = {0, 0, 0, 0, 0};
    for (auto c : s)
    {
        for (int j = 0; j < ori_size; j++)
        {
            if (original[j] == toupper(c))
                carr[j] += 1;
        }
    }
    cout << *min_element(carr, carr + 5);
    return 0;
}