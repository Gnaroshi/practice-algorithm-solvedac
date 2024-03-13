// problem: 포인트 카드
// id: 14471
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(max(0, n - a));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m - 1; i++)
        ans += v[i];
    cout << ans;

    return 0;
}