// problem: B번 - 점심시간 레이스
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    int mn = 0x3f3f3f3f, ml = m + 1;
    for (int i = 1; i <= k; i++)
    {
        int f, d, t;
        cin >> f >> d;
        t = abs(f + m - d);
        if (mn > t)
        {
            ml = i;
            mn = t;
        }
    }
    cout << ml;

    return 0;
}