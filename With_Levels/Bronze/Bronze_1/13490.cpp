// problem: Cleaning Stations
// id: 13490
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
        int n, m, t, mx;
        cin >> n >> m;
        vector<int> v, M;
        for (int i = 0; i < m; i++)
        {
            cin >> t;
            M.push_back(t);
        }
        for (int i = 0; i < n; i++)
        {
            int ts = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> t;
                ts += t * M[j];
            }
            v.push_back(ts);
        }
        mx = *max_element(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] == mx)
                cout << i + 1 << '\n';
        }

        cout << '\n';
    }

    return 0;
}