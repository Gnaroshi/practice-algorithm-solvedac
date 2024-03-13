// problem: General Election
// id: 16175
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, t;
        cin >> n >> m;
        int *v = (int *)malloc(sizeof(int) * n);
        fill(v, v + n, 0);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> t;
                v[j] += t;
            }
        }
        int loc = 0;
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            if (mx < v[i])
            {
                loc = i;
                mx = v[i];
            }
        }
        cout << loc + 1 << '\n';
    }

    return 0;
}