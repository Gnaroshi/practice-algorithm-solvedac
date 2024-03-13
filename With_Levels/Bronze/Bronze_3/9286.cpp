// problem: Gradabase
// id: 9286
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
        int m, t;
        cin >> m;
        cout << "Case " << i << ":\n";
        for (int i = 0; i < m; i++)
        {
            cin >> t;
            if (t < 6)
                cout << t + 1 << '\n';
        }
    }

    return 0;
}
