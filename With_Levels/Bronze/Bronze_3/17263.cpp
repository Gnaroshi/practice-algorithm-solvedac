// problem: Sort 마스터 배지훈
// id: 17263
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        mx = max(mx, t);
    }
    cout << mx;

    return 0;
}