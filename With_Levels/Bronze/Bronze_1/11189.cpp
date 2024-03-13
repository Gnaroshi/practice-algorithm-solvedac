// problem: Toilet Seat
// id: 11189
// time taken:
#include <bits/stdc++.h>
using namespace std;
string s;
int a, b, c, u, d, iter;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;
    iter = s.length();
    for (int i = 1; i < iter; i++)
    {
        if (s[i] == 'U')
            u++;
        else
            d++;
    }
    if (s[0] == 'D')
        a = (d - (s[1] == 'D')) * 2 + 1;
    else
        a = d * 2;

    if (s[0] == 'D')
        b = u * 2;
    else
        b = (u - (s[1] == 'U')) * 2 + 1;

    char bef = s[0];
    for (int i = 1; i < iter; i++)
    {
        c += bef != s[i];
        bef = s[i];
    }
    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';

    return 0;
}