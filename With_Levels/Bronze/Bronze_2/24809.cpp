// problem: Broken Swords
// id: 24809
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t = 0, b = 0, tb;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s[0] == '0')
            t++;
        if (s[1] == '0')
            t++;
        if (s[2] == '0')
            b++;
        if (s[3] == '0')
            b++;
    }
    tb = min(t, b) / 2;
    cout << tb << ' ' << t - tb * 2 << ' ' << b - tb * 2;

    return 0;
}