// problem: 선 긋기
// id: 2170
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<int, int> *li = (pair<int, int> *)malloc(sizeof(pair<int, int>) * n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        li[i] = pair<int, int>(a, b);
    }

    sort(li, li + n);
    int ans = 0;
    int f, e;
    f = e = -INT_MAX + 1;

    for (int i = 0; i < n; i++)
    {
        if (e < li[i].first)
        {
            ans += e - f;
            f = li[i].first;
            e = li[i].second;
        }
        else
            e = max(e, li[i].second);
    }
    ans += e - f;
    cout << ans;

    return 0;
}