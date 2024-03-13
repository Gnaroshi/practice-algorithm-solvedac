// problem: Scores of Final Examination
// id: 17577
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (true)
    {
        cin >> n >> m;
        if (!n && !m)
            break;
        int *st = (int *)malloc(sizeof(int) * n), t;
        fill(st, st + n, 0);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> t;
                st[j] += t;
            }
        }
        cout << *max_element(st, st + n) << '\n';
    }

    return 0;
}