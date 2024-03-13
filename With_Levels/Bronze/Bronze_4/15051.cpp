// problem: Máquina de café
// id: 15051
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[3];
    for (int i = 0; i < 3; i++)
        cin >> n[i];
    int ans = min(min(n[1] * 2 + n[2] * 4, n[0] * 2 + n[2] * 2), n[0] * 4 + n[1] * 2);
    cout << ans << '\n';

    return 0;
}