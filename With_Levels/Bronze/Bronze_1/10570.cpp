// problem: Favorite Number
// id: 10570
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cnt[1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int v, s;
        cin >> v;
        fill(cnt, cnt + 1001, 0);
        while (v--)
        {
            cin >> s;
            cnt[s]++;
        }
        cout << max_element(cnt, cnt + 1001) - cnt << '\n';
    }

    return 0;
}