// problem: Шоколадка
// id: 22150
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
        int n, l, r;
        cin >> n;
        bool chk = true;
        for (int i = 0; i < n; i++)
        {
            cin >> l >> r;
            if (l + r != n)
                chk = false;
        }
        if (!chk)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}