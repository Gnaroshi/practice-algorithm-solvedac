// problem: Mutint
// id: 26516
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        cin >> s;
        if (s == "0")
            break;
        int iter = s.length();
        int loc = 0, mx = -1, t;
        for (int i = iter - 1; i >= 0; i--)
        {
            if (s[i] - '0' >= mx)
            {
                mx = s[i] - '0';
                loc = i;
            }
        }
        t = s[loc] - '0';
        if (t % 2)
            s[loc] = '0';
        else
        {
            t += 4;
            if (t > 9)
                t %= 10;
            s[loc] = char(t + '0');
        }
        bool fst = true;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == '0' && fst)
                continue;
            else
                fst = false;
            if (!fst)
                cout << s[i];
        }
        cout << '\n';
    }

    return 0;
}