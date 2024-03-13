// problem: Shell Game
// id: 17027
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, g, mx = 0;
    cin >> n;
    vector<pair<int, int>> sw(n);
    vector<int> el(n);
    for (int i = 0; i < n; i++)
        cin >> sw[i].first >> sw[i].second >> el[i];

    int pe[3][4] = {{0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
    for (int i = 0; i < 3; i++)
    {
        int tcnt = 0;
        for (int j = 0; j < n; j++)
        {
            swap(pe[i][sw[j].first], pe[i][sw[j].second]);
            if (pe[i][el[j]] == 1)
                tcnt++;
        }
        mx = max(mx, tcnt);
    }
    cout << mx;

    return 0;
}