// problem: 기상청 인턴 신현수
// id: 2435
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, mx = -1000000;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n - k + 1; i++)
    {
        int t = 0;
        for (int j = i; j < i + k; j++)
            t += v[j];
        mx = max(mx, t);
    }
    cout << mx;

    return 0;
}