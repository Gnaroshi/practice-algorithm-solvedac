// problem: 정원 (Easy)
// id: 24049
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    bool *l = new bool[n];
    bool *u = new bool[m];
    for (int i = 0; i < n; i++)
        cin >> l[i];
    for (int i = 0; i < m; i++)
        cin >> u[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == 0)
                u[j] = (u[j] ^ l[i]);
            else
                u[j] = (u[j] ^ u[j - 1]);
        }
    }
    cout << u[m - 1];

    return 0;
}