// problem: Natives
// id: 24855
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, iter;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end(), greater<>());
    iter = n / 2;
    for (int i = 0; i < iter; i++)
        ans += v[i];
    cout << ans;

    return 0;
}