// problem: 뚊
// id: 11383
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    string t;
    vector<string> a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a.emplace_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        b.emplace_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * m; j++)
        {
            if (b[i][j] != a[i][j / 2])
            {
                cout << "Not Eyfa";
                return 0;
            }
        }
    }
    cout << "Eyfa";

    return 0;
}