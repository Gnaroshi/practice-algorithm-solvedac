// problem: Игра
// id: 22108
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
        int n, t;
        cin >> n;
        vector<vector<int>> v(n);
        bool chk = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> t;
                v[i].push_back(t);
                if (t == 0)
                    chk = true;
            }
        }
        if (chk)
        {
            cout << "YES\n";
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] == v[i - 1][j])
                {
                    chk = true;
                    break;
                }
            }
            if (chk)
                break;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (v[i][j - 1] == v[i][j])
                {
                    chk = true;
                    break;
                }
            }
            if (chk)
                break;
        }
        cout << (chk ? "YES\n" : "NO\n");
    }

    return 0;
}