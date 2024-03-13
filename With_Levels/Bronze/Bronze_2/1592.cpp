// problem: 영식이와 친구들
// id: 1592
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, l;
    cin >> n >> m >> l;
    int *cnts = (int *)malloc(sizeof(int) * (n));
    fill(cnts, cnts + n, 0);
    cnts[0] = 1;
    int ans = 0;
    int cur = 0;
    if (m == 1)
    {
        cout << 0 << '\n';
        return 0;
    }
    while (true)
    {
        if (cnts[cur] % 2 == 1)
        {
            cur += l;
            if (cur >= n)
            {
                cur -= n;
            }
        }
        else
        {
            cur -= l;
            if (cur < 0)
            {
                cur += n;
            }
        }
        cnts[cur]++;
        ans++;

        bool isEnd = false;
        for (int i = 0; i < n; i++)
        {
            if (cnts[i] == m)
            {
                isEnd = true;
                break;
            }
        }
        if (isEnd)
            break;
    }
    cout << ans << '\n';

    return 0;
}