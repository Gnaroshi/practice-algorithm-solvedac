// problem: 캠핑
// id: 4796
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, p, v, tc = 1;
    while (true)
    {
        cin >> l >> p >> v;
        if (l + p + v == 0)
            break;
        cout << "Case " << tc++ << ": " << v / p * l + min(l, v % p) << '\n';
    }

    return 0;
}