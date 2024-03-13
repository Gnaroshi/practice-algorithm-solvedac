// problem: Fix
// id: 6892
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int SIZE = 3;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        string s[SIZE];
        int slen[SIZE];
        bool chk = false;
        for (int i = 0; i < SIZE; i++)
        {
            cin >> s[i];
            slen[i] = s[i].length();
        }
        for (int i = 0; i < SIZE; i++)
        {
            if (chk)
                break;
            for (int j = i + 1; j < SIZE; j++)
            {
                if (chk)
                    break;
                if (slen[i] <= slen[j])
                {
                    if (s[j].substr(0, slen[i]) == s[i] || s[j].substr(slen[j] - slen[i], slen[i]) == s[i])
                    {
                        chk = true;
                        break;
                    }
                }
                else if (slen[i] >= slen[j])
                {
                    if (s[i].substr(0, slen[j]) == s[j] || s[i].substr(slen[i] - slen[j], slen[j]) == s[j])
                    {
                        chk = true;
                        break;
                    }
                }
            }
        }
        if (chk)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}