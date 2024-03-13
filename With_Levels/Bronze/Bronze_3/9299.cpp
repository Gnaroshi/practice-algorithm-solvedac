// problem: Math Tutoring
// id: 9299
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
        int n, t, bef;
        cin >> n;
        cout << "Case " << i << ": " << n - 1 << ' ';
        for (int j = n; j > 0; j--)
        {
            cin >> t;
            cout << t * j << ' ';
        }
        cin >> t;
        cout << '\n';
    }

    return 0;
}