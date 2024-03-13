// problem: More Dice
// id: 9288
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
        int n;
        cin >> n;
        cout << "Case " << i << ":\n";
        for (int i = 1; i * 2 <= n; i++)
        {
            if (n - i > 6)
                continue;
            cout << "(" << i << "," << n - i << ")\n";
        }
    }

    return 0;
}