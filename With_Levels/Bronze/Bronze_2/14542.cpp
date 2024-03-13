// problem: Outer Triangle Sum
// id: 14542
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tcc = 1, t, ts;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        cin >> t;
        ts = t;
        if (n == 1)
        {
            cout << "Case #" << tcc++ << ":" << ts << '\n';
            continue;
        }
        for (int i = 1; i < n - 1; i++)
        {
            cin >> t;
            ts += t;
            for (int j = 1; j < i; j++)
                cin >> t;
            cin >> t;
            ts += t;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            ts += t;
        }
        cout << "Case #" << tcc++ << ":" << ts << '\n';
    }

    return 0;
}