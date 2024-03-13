// problem: Циклические палиндромы
// id: 21405
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s;
    int iter = s.length(), hi = iter / 2;
    bool chk;
    for (int i = 0; i < iter; i++)
    {
        chk = true;
        for (int j = 0; j < hi; j++)
        {
            if (s[j] != s[iter - j - 1])
            {
                chk = false;
                break;
            }
        }
        if (chk)
        {
            cout << "yes";
            return 0;
        }

        t = s.substr(1);
        t += s.front();
        s = t;
    }
    cout << "no";

    return 0;
}