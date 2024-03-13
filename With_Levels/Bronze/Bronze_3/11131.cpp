// problem: Balancing Weights
// id: 11131
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
        int n;
        cin >> n;
        int t, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            cnt += t;
        }
        if (cnt < 0)
            cout << "Left\n";
        else if (cnt > 0)
            cout << "Right\n";
        else
            cout << "Equilibrium\n";
    }

    return 0;
}