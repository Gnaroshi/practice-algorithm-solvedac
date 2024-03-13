// problem: Abdelrahman
// id: 10693
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
        int a, b;
        cin >> a >> b;
        cout << "Case " << i << ": " << max(0, b - (a - 1)) << '\n';
    }

    return 0;
}