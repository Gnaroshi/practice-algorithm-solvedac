// problem: 아름다운 수
// id: 2774
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int iter = s.length(), cnt[10] = {0}, ans = 0;
        for (int i = 0; i < iter; i++)
            cnt[s[i] - '0'] = 1;
        for (int i = 0; i < 10; i++)
            if (cnt[i])
                ans++;
        cout << ans << '\n';
    }

    return 0;
}