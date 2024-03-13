// problem: Ahmed Aly
// id: 10698
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
        int a, b, c;
        char op, t;
        cin >> a >> op >> b >> t >> c;
        if (op == '+')
        {
            if (a + b == c)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            if (a - b == c)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}