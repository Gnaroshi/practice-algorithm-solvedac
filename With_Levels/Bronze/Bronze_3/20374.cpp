// problem: Big Money
// id: 20374
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    ll lt, u, d;
    ll a, b, c;
    a = 0;
    b = 0;
    while (!cin.eof())
    {
        string s;
        cin >> s;
        int iter = s.length();
        u = d = 0;
        bool isP = false;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == '.')
            {
                isP = true;
                continue;
            }
            if (!isP)
            {
                u *= 10;
                u += s[i] - '0';
            }
            else
            {
                d *= 10;
                d += s[i] - '0';
            }
        }

        b += d;
        a += u;
        // cout << "a: " << a << " b: " << b << '\n';
    }
    c = b % 100;
    b -= c;
    a += b / 100;
    if (c < 10)
        cout << a << ".0" << c;
    else
        cout << a << '.' << c;

    return 0;
}