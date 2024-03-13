// problem: 서버
// id: 10409
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, tsk;
    cin >> n >> t;
    int cnt = 0, s = 0;
    bool chk = true;
    for (int i = 0; i < n; i++)
    {
        cin >> tsk;
        if (s + tsk <= t && chk)
        {
            s += tsk;
            cnt++;
        }
        else
            chk = false;
    }
    cout << cnt;

    return 0;
}