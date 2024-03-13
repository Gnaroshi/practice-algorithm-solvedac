// problem: Run-Length Encoding, Run!
// id: 16634
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    string s;
    cin >> c >> s;
    int iter = s.length();
    if (c == 'E')
    {
        char st = s[0];
        int cnt = 1;
        for (int i = 1; i < iter; i++)
        {
            if (st != s[i])
            {
                cout << st << cnt;
                cnt = 1;
            }
            else
                cnt++;
            st = s[i];
        }
        cout << st << cnt;
    }
    else
    {
        for (int i = 0; i < iter; i += 2)
        {
            int d = s[i + 1] - '0';
            for (int j = 0; j < d; j++)
                cout << s[i];
        }
    }

    return 0;
}