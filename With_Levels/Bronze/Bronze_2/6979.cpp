// problem: Maximum Distance
// id: 6979
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
        int n, mx = 0;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (a[i] <= b[j])
                    mx = max(mx, j - i);
            }
        }
        cout << "The maximum distance is " << mx << "\n\n";
    }

    return 0;
}