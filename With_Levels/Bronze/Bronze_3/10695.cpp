// problem: Dalia
// id: 10695
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
        cout << "Case " << i << ": ";
        int n, r1, c1, r2, c2;
        cin >> n >> r1 >> c1 >> r2 >> c2;
        if ((r1 - 1 == r2 && c1 + 2 == c2) ||
            (r1 - 1 == r2 && c1 - 2 == c2) ||
            (r1 + 1 == r2 && c1 + 2 == c2) ||
            (r1 + 1 == r2 && c1 - 2 == c2) ||
            (r1 - 2 == r2 && c1 + 1 == c2) ||
            (r1 - 2 == r2 && c1 - 1 == c2) ||
            (r1 + 2 == r2 && c1 + 1 == c2) ||
            (r1 + 2 == r2 && c1 - 1 == c2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
