// problem: Right Triangle
// id: 9723
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Case #" << i << ": ";
        int n[3];
        for (int j = 0; j < 3; j++)
            cin >> n[j];
        sort(n, n + 3);
        if (n[0] * n[0] + n[1] * n[1] == n[2] * n[2] && n[2] < n[0] + n[1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}