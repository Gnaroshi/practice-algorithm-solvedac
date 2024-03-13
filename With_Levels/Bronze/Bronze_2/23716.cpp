// problem: Transform the String
// id: 23716
// time taken:
#include <bits/stdc++.h>
using namespace std;

int gmd(char a, char b)
{
    return min(abs(a - b), abs(min(a, b) + 26 - max(a, b)));
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        string s, f;
        cin >> s >> f;
        int tmn = 0, mn = 0;
        for (auto c : s)
        {
            tmn = 0x3f3f3f3f;
            for (auto a : f)
            {
                tmn = min(tmn, gmd(c, a));
            }
            mn += tmn;
        }
        cout << mn << '\n';
    }

    return 0;
}