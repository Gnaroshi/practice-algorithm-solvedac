// problem: 폭죽쇼
// id: 1773
// time taken:
#include <bits/stdc++.h>
using namespace std;
bool chk[2000001];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        for (int j = t; j <= c; j += t)
            chk[j] = 1;
    }
    int cnt = 0;
    for (int i = 0; i <= c; i++)
        if (chk[i])
            cnt++;
    cout << cnt;

    return 0;
}