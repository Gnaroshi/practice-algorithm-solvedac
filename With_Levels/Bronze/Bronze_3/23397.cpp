// problem: Katmandu
// id: 23397
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, d, m, y;
    cin >> t >> d >> m;
    int cnt = 0;
    int bef = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> y;
        if (y - bef >= t)
            cnt++;
        bef = y;
    }
    if (d - bef >= t)
        cnt++;
    if (cnt != 0)
        cout << "Y";
    else
        cout << "N";

    return 0;
}