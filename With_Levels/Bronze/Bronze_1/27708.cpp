// problem: Antisort
// id: 27708
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << tc << "\n\n";
    while (tc--)
    {
        int n;
        cin >> n;
        cout << n << '\n';
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        int t = v[0];
        v[0] = v[1];
        v[1] = t;
        for (int i = 0; i < n; i++)
            cout << v[i] << ((i != n - 1) ? " " : "\n\n");
    }

    return 0;
}