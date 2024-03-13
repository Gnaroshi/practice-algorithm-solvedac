// problem: 크리스마스 파티
// id: 10708
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    cin >> n >> m;
    int *sc = (int *)malloc(sizeof(int) * n + 1);
    fill(sc, sc + n + 1, 0);
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        v.emplace_back(t);
    }
    for (int i = 0; i < m; i++)
    {
        int ms = 0;
        for (int j = 1; j <= n; j++)
        {
            cin >> t;
            if (t == v[i])
                sc[j]++;
            else
                ms++;
        }
        sc[v[i]] += ms;
    }
    for (int i = 1; i <= n; i++)
        cout << sc[i] << '\n';

    return 0;
}