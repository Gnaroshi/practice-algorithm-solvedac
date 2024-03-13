// problem: 찾았다 악질
// id: 25576
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, h, cnt = 0, t;
    cin >> n >> m;
    n--;
    h = n / 2 + n % 2;
    n++;
    int *l = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
        cin >> l[i];
    for (int i = 1; i < n; i++)
    {
        int s = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            s += abs(t - l[j]);
        }
        if (s > 2000)
            cnt++;
    }
    if (cnt >= h)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}