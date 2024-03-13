// problem: Transactions
// id: 2975
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int a, b, r;
        char c;
        cin >> a >> c >> b;
        if (a == 0 && b == 0)
            break;
        if (c == 'W')
        {
            r = a - b;
            if (r < -200)
                cout << "Not allowed";
            else
                cout << r;
        }
        else
            cout << a + b;
        cout << '\n';
    }

    return 0;
}