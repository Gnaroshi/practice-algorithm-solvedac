// problem: Scavenger Hunt
// id: 6030
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, q;
    cin >> p >> q;

    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= q; j++)
        {
            if (p % i == 0 && q % j == 0)
                cout << i << ' ' << j << '\n';
        }
    }

    return 0;
}