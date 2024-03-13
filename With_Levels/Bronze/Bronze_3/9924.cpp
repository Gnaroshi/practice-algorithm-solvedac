// problem: The Euclidean Algorithm
// id: 9924
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while (true)
    {
        if (a == b)
        {
            cout << cnt;
            break;
        }
        int mx, mn;
        mx = max(a, b);
        mn = min(a, b);
        a = mx - mn;
        b = mn;
        cnt++;
    }

    return 0;
}