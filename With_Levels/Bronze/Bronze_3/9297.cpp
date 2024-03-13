// problem: Reducing Improper Fractions
// id: 9297
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
        int q, r;
        q = a / b;
        r = a % b;
        cout << "Case " << i << ": ";
        if (a == 0)
            cout << 0;
        else
        {
            if (q != 0)
                cout << q << " ";
            if (r != 0)
                cout << r << "/" << b;
        }
        cout << '\n';
    }

    return 0;
}