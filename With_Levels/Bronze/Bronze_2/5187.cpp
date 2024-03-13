// problem: Civil Engineering
// id: 5187
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int m, n, ans = 0;
        cin >> m >> n;
        int *mt = (int *)malloc(sizeof(int) * m);
        for (int i = 0; i < m; i++)
            cin >> mt[i];
        for (int i = 0; i < n; i++)
        {
            int h, w, d, id;
            cin >> h >> w >> d >> id;
            ans += h * w * d * mt[id - 1];
        }
        cout << ans << '\n';
    }

    return 0;
}