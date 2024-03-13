// problem: Cell-Phone Messaging
// id: 6857
// time taken:
#include <bits/stdc++.h>
using namespace std;

int pd[27] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9, -1};
int cnt[27] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4, -1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    char bef;
    int ans;
    while (true)
    {
        cin >> s;
        if (s == "halt")
            break;
        bef = 'z' + 1;
        ans = 0;
        for (auto i : s)
        {
            if (pd[bef - 'a'] == pd[i - 'a'])
                ans += 2;
            ans += cnt[i - 'a'];
            bef = i;
        }
        cout << ans << '\n';
    }

    return 0;
}