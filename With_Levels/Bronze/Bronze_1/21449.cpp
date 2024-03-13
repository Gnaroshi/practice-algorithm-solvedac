// problem: Красивая таблица результатов
// id: 21449
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, cnt = 0, t, mx;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        mx = t;
        while (true)
        {
            if (m % (mx + 1) == 0)
                mx++;
            else
                break;
        }
        cnt += mx - t;
    }
    cout << cnt;

    return 0;
}