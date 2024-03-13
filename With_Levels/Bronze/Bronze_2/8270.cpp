// problem: Tulips
// id: 8270
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool chk[15001] = {0};
    int n, cnt = 0, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        chk[t] = 1;
    }
    for (int i = 0; i < 15001; i++)
        cnt += chk[i];
    cout << 15000 - cnt;

    return 0;
}