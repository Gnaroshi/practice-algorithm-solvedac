// problem: 고급 수학
// id: 7510
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[3];
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> n[j];
        sort(n, n + 3);
        cout << "Scenario #" << i << ":\n";
        if (n[2] * n[2] == n[0] * n[0] + n[1] * n[1])
            cout << "yes\n";
        else
            cout << "no\n";
        cout << '\n';
    }

    return 0;
}
