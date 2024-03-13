// problem: Beekeeper
// id: 24769
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        string s, ans;
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            int iter = s.length(), cnt = 0;
            for (int j = 0; j < iter; j++)
            {
                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'y')
                {
                    if (s[j] == s[j + 1])
                    {
                        cnt++;
                        j++;
                    }
                }
            }
            if (mx < cnt)
            {
                ans = s;
                mx = cnt;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}