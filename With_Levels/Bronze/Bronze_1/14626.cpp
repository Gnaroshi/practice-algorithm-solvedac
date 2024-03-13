// problem: ISBN
// id: 14626
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int m = s[12] - '0', ts = 0, l = 0, r;
    for (int i = 0; i < 12; i++)
    {
        if (s[i] == '*')
        {
            l = i;
            continue;
        }
        if (i % 2)
            ts += (s[i] - '0') * 3;
        else
            ts += s[i] - '0';
    }
    if (l % 2)
        r = 3;
    else
        r = 1;

    for (int i = 0; i < 10; i++)
    {
        if ((ts + i * r + m) % 10 == 0)
        {
            cout << i;
            return 0;
        }
    }
    // (ts + x*(l%2?3:1))%10 = m
    // (ts%10 + (x*(l%2?3:1))%10)%10 = m

    return 0;
}