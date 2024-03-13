// problem: Железная дорога
// id: 29601
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = stoi(s.substr(1, s.length() - 1)), a, b, c;
    if (s[0] == 'R')
    {
        if (n > 54)
        {
            cout << -1;
            return 0;
        }
        if (n > 36)
        {
            b = 0;
            a = (54 - n) / 2 + 1;
        }
        else
        {
            b = 1;
            a = (n - 1) / 4 + 1;
        }
    }
    else
    {
        if (n > 36)
        {
            cout << -1;
            return 0;
        }
        a = (n - 1) / 4 + 1;
        b = 1;
    }
    c = 1 + (-2) * (n % 2);

    cout << a << ' ' << b << ' ' << c;

    return 0;
}