// problem: Billing
// id: 5342
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double ans = 0;
    string s;
    while (true)
    {
        cin >> s;
        if (s == "EOI")
            break;
        if (s[0] == 'P')
        {
            if (s[1] == 'a')
                ans += 57.99;
            else if (s[1] == 'r')
                ans += 120.5;
            else if (s[1] == 'l')
                ans += 31.25;
        }
        else if (s[0] == 'B')
            ans += 22.5;
        else if (s[0] == 'C')
            ans += 10.95;
        else if (s[0] == 'N')
            ans += 11.20;
        else
            ans += 66.95;
    }
    cout << fixed;
    cout.precision(2);
    cout << '$' << ans;

    return 0;
}