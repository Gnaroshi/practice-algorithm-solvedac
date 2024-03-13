// problem: Chess Puzzle
// id: 5239
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, n, a, b;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        int *r = new int[9];
        int *c = new int[9];
        fill(r, r + 9, 0);
        fill(c, c + 9, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            r[a]++, c[b]++;
        }
        bool chk = true;
        for (int i = 1; i <= 8; i++)
        {
            if (r[i] > 1 || c[i] > 1)
            {
                chk = false;
                break;
            }
        }
        if (!chk)
            cout << "NOT ";
        cout << "SAFE\n";
    }

    return 0;
}