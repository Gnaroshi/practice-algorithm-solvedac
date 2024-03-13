// problem: Check Digits
// id: 9228
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    while (true)
    {
        cin >> s;
        if (s == "#")
            break;
        ll t = 0;
        int iter = s.length(), m = 2;
        for (int i = iter - 1; i >= 0; i--)
            t += (s[i] - '0') * m++;
        t = 11 - (t % 11);
        cout << s << " -> ";
        if (t == 10)
            cout << "Rejected\n";
        else if (t == 11)
            cout << 0 << '\n';
        else
            cout << t << '\n';
    }
    return 0;
}