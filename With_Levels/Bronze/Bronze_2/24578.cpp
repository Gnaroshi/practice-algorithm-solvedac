// problem: Ultimate Binary Watch
// id: 24578
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<string> v;
    int n[4];
    for (int i = 0; i < s.length(); i++)
    {
        n[i] = s[i] - '0';
        v.emplace_back("");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (n[j] % 2)
                v[i].append("*");
            else
                v[i].append(".");
            if (j != 1 && j != 3)
                v[i].append(" ");
            else if (j == 1)
                v[i].append("   ");
            n[j] /= 2;
        }
    }
    reverse(v.begin(), v.end());
    for (auto i : v)
        cout << i << '\n';

    return 0;
}