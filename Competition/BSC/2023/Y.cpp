// problem: Y번 - 체스 초보 브실이
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ans = 0;
    string s;
    for (int i = 0; i < 8; i++)
    {
        cin >> s;
        for (auto j : s)
        {
            if (isalpha(j))
            {
                if (j == 'p')
                    ans -= 1;
                else if (j == 'P')
                    ans += 1;
                else if (j == 'n' || j == 'b')
                    ans -= 3;
                else if (j == 'N' || j == 'B')
                    ans += 3;
                else if (j == 'r')
                    ans -= 5;
                else if (j == 'R')
                    ans += 5;
                else if (j == 'q')
                    ans -= 9;
                else if (j == 'Q')
                    ans += 9;
            }
        }
    }
    cout << ans;

    return 0;
}