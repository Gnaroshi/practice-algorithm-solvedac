// problem: 등장하지 않는 문자의 합
// id: 3059
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool a[26];

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
        int iter = s.length(), ans = 0;
        fill(a, a + 26, 0);
        for (int i = 0; i < iter; i++)
            a[s[i] - 'A'] = 1;
        for (int i = 0; i < 26; i++)
        {
            if (!a[i])
                ans += 'A' + i;
        }
        cout << ans << '\n';
    }

    return 0;
}