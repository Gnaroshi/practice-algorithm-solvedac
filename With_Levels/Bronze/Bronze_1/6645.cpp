// problem: Stock Exchange
// id: 6645
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string is, tnm, tbs;
    double tsp;

    while (true)
    {
        cin >> n >> is;
        if (n == 0 && is == "END")
            break;
        vector<string> nm;
        vector<vector<string>> ans(n);
        vector<double> sp;
        vector<bool> bs;
        for (int i = 0; i < n; i++)
        {
            cin >> tnm >> tbs >> tsp;
            if (tbs[0] == 'b')
                bs.push_back(0);
            else
                bs.push_back(1);
            nm.push_back(tnm);
            sp.push_back(tsp);
        }
        for (int i = 0; i < n; i++)
        {
            if (bs[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        continue;
                    if (bs[j])
                        continue;
                    if (sp[i] <= sp[j])
                        ans[i].push_back(nm[j]);
                }
            }
            else
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        continue;
                    if (!bs[j])
                        continue;
                    if (sp[i] >= sp[j])
                        ans[i].push_back(nm[j]);
                }
            }
        }
        cout << is << '\n';
        for (int i = 0; i < n; i++)
        {
            int sz = ans[i].size();
            cout << nm[i] << ": ";
            if (sz)
            {
                for (int j = 0; j < sz; j++)
                    cout << ans[i][j] << (j != sz - 1 ? ' ' : '\n');
            }
            else
                cout << "NO-ONE\n";
        }
    }

    return 0;
}