// problem: Batter Up
// id: 15096
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double t, s = 0, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t != -1)
        {
            cnt += 1;
            s += t;
        }
    }
    cout << fixed;
    cout.precision(7);
    cout << s / cnt;

    return 0;
}