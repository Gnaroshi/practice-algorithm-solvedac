// problem: 중앙 이동 알고리즘
// id: 2903
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ans;
    ans = 2;
    cin >> n;
    for (int i = 0; i < n; i++)
        ans += (ans - 1);
    cout << ans * ans;

    return 0;
}