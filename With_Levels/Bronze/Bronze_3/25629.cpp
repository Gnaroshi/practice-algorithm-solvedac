// problem: 홀짝 수열
// id: 25629
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, od, ev, t;
    od = ev = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t % 2 == 0)
            ev++;
        else
            od++;
    }
    if (od - ev < 2 && od - ev >= 0)
        cout << 1;
    else
        cout << 0;

    return 0;
}