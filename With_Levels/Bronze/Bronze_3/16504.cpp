// problem: 종이접기
// id: 16504
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long ans = 0;
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            ans += t;
        }
    }
    cout << ans;

    return 0;
}