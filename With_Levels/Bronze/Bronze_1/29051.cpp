// problem: Правописание
// id: 29051
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cnt[26] = {
    2, 1, 1, 1, 2,
    2, 1, 3, 3, 2,
    3, 1, 1, 1, 1,
    1, 1, 2, 1, 2,
    1, 1, 1, 2, 2,
    1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    string s;
    cin >> s;
    for (auto i : s)
        ans += cnt[i - 'A'];
    cout << ans;

    return 0;
}