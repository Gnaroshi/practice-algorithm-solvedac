// problem: A번 - 레몬 따기
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    int mx = 0;
    for (int i = n; i > 0; i--)
    {
        cin >> t;
        mx = max(mx, t - i);
    }
    cout << mx;

    return 0;
}