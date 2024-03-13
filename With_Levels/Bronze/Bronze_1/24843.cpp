// problem: Friendly Rooks
// id: 24843
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    if (min(n, m) >= k)
    {
        cout << "Possible\n";
        vector<string> v;
        string t = "";
        for (int i = 0; i < m; i++)
            t += '.';
        for (int i = 0; i < n; i++)
            v.push_back(t);
        for (int i = 0; i < k; i++)
        {
            v[i][i] = '*';
        }
        for (auto i : v)
            cout << i << '\n';
    }
    else
        cout << "Impossible";

    return 0;
}