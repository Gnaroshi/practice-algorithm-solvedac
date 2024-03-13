// problem: Luhn
// id: 14075
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    int ans = 0;
    for (int i = 0; i < iter; i++)
    {
        int t = s[i] - '0';
        if (i % 2 == 0)
        {
            t *= 2;
            if (t > 9)
                t = 1 + t % 10;
        }
        ans += t;
    }
    if (ans % 10 == 0)
        cout << "DA";
    else
        cout << "NE";

    return 0;
}