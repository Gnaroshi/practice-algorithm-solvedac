// problem: 내 스트릭을 돌려내!
// id: 30395
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = 0, cur = 0, d, p = -2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        if (d)
            cur++;
        else if (i - p >= 2)
            p = i;
        else
        {
            mx = max(mx, cur);
            cur = 0;
        }
    }
    mx = max(mx, cur);
    cout << mx;

    return 0;
}