// problem: Triangle
// id: 26509
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        bool chk = true;
        int a[3], b[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];
        for (int i = 0; i < 3; i++)
            cin >> b[i];
        sort(a, a + 3);
        sort(b, b + 3);
        for (int i = 0; i < 3; i++)
        {
            if (a[i] != b[i])
            {
                chk = false;
                break;
            }
        }

        if (chk)
        {
            if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}
