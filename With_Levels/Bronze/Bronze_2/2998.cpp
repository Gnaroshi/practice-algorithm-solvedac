// problem: 8진수
// id: 2998
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = 3 - (s.length() % 3);
    if (iter == 3)
        iter = 0;
    for (int i = 0; i < iter; i++)
        s.insert(s.begin(), '0');
    iter = s.length() / 3;
    for (int i = 0; i < iter; i++)
    {
        string t = s.substr(i * 3, 3);
        int b = 4, p = 0;
        for (auto j : t)
        {
            if (j == '1')
                p += b;
            b /= 2;
        }
        cout << p;
    }

    return 0;
}