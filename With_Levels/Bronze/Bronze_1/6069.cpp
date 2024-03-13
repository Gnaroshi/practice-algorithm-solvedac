// problem: Switching Lights
// id: 6069
// time taken:
#include <bits/stdc++.h>
using namespace std;

int lt[501];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, op, s, e, cnt;
    cin >> n >> m;

    while (m--)
    {
        cin >> op >> s >> e;
        if (op)
        {
            cnt = 0;
            for (int i = s; i <= e; i++)
                cnt += lt[i] % 2;
            cout << cnt << '\n';
        }
        else
        {
            for (int i = s; i <= e; i++)
                lt[i]++;
        }
    }

    return 0;
}