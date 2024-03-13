// problem: Estimathon
// id: 27340
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, cnt = 0;
    cin >> n >> m;
    bool chk = true;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        if (a / 4 == 0)
            chk = false;
        cnt += a / 4;
    }
    if (!chk)
        cout << "NE";
    else
        cout << ((cnt >= n && n >= m) ? "DA" : "NE");

    return 0;
}