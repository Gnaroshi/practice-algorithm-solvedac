// problem: ПАЛИНДРОМ
// id: 24346
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int cnt[256] = {0}, ans = 0;
    for (auto i : s)
        cnt[i]++;
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] % 2 == 1)
            ans++;
    }
    cout << max(ans, 1);
    return 0;
}