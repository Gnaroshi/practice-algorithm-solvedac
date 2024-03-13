// problem: 노브 돌리기
// id: 23756
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, t, s = 0;
    cin >> n >> a;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        s += min(abs(a - t), 360 - abs((a - t)));
        a = t;
    }
    cout << s;

    return 0;
}