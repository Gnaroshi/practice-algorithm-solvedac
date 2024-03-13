// problem: Tomater
// id: 26946
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d, t[3], cnt = 0;
    cin >> n >> d;
    for (int i = 0; i < 3; i++)
        cin >> t[i];
    for (int i = 1; i <= n; i++)
    {
        bool chk = false;
        for (int j = 0; j < 3; j++)
        {
            if (abs(i - t[j]) <= d)
                chk = true;
        }
        if (chk)
            cnt++;
    }

    cout << cnt;
    return 0;
}