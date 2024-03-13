// problem: Cezar
// id: 14963
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t, s = 21;
    int cd[10];
    for (int i = 0; i < 8; i++)
        cd[i] = 4;
    cd[8] = 20;
    cd[9] = 4;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        s -= t;
        cd[t - 2]--;
    }
    if (s > 10)
        cout << "VUCI";
    else if (s < 2)
        cout << "DOSTA";
    else
    {
        int cnt = 0;
        for (int i = 2; i <= s; i++)
            cnt += cd[i - 2];
        cout << ((cnt > 52 - n - cnt) ? "VUCI" : "DOSTA");
    }
    return 0;
}