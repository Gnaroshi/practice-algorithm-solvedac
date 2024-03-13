// problem: 찍기
// id: 2966
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a = "ABCABCABCABC", b = "BABCBABCBABC", c = "CCAABBCCAABB", ans;
    int n, mx = 0;
    vector<int> cnt(3, 0);
    vector<string> vs = {"Adrian", "Bruno", "Goran"};
    cin >> n >> ans;
    for (int i = 0; i < n; i++)
    {
        if (a[i % 12] == ans[i])
            cnt[0]++;
        if (b[i % 12] == ans[i])
            cnt[1]++;
        if (c[i % 12] == ans[i])
            cnt[2]++;
    }

    for (auto i : cnt)
        mx = max(mx, i);

    cout << mx << '\n';
    for (int i = 0; i < 3; i++)
    {
        if (cnt[i] == mx)
            cout << vs[i] << '\n';
    }

    return 0;
}