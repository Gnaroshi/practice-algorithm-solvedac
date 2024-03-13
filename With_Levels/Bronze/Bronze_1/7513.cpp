// problem: 준살 프로그래밍 대회
// id: 7513
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
        cout << "Scenario #" << tcc << ":\n";
        int m, n, k, t;
        cin >> m;
        vector<string> v(m);
        for (auto &i : v)
            cin >> i;
        cin >> n;
        while (n--)
        {
            cin >> k;
            while (k--)
            {
                cin >> t;
                cout << v[t];
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}