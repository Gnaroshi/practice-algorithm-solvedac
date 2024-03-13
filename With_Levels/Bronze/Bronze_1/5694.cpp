// problem: Bingo!
// id: 5694
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b;
    while (true)
    {
        cin >> n >> b;
        if (n + b == 0)
            break;
        bool *chk = new bool[n + 1];
        fill(chk, chk + n + 1, 0);
        vector<int> v(b);
        for (auto &i : v)
            cin >> i;
        for (auto i : v)
        {
            for (auto j : v)
            {
                if (abs(i - j) <= n)
                    chk[abs(i - j)] = 1;
            }
        }
        bool ans = true;
        for (int i = 0; i <= n; i++)
        {
            if (!chk[i])
            {
                ans = false;
                break;
            }
        }
        cout << (ans ? "Y\n" : "N\n");
    }

    return 0;
}