// problem: 인생 점수
// id: 15351
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        getline(cin, s);
        int iter = s.length(), ans = 0;
        for (int i = 0; i < iter; i++)
        {
            if (isalpha(s[i]))
                ans += s[i] - 'A' + 1;
        }
        if (ans == 100)
            cout << "PERFECT LIFE\n";
        else
            cout << ans << '\n';
    }

    return 0;
}