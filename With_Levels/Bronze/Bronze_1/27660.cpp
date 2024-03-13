// problem: Queue skipping (Hard)
// id: 27660
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
        int n, e, t;
        cin >> n >> e;
        bool *pc = (bool *)malloc(sizeof(bool) * n + 1);
        fill(pc, pc + n + 1, true);
        t = n;
        vector<int> seq(e);
        for (auto &i : seq)
            cin >> i;
        for (int i = e - 1; i >= 0; i--)
        {
            if (t == 1)
                break;
            if (pc[seq[i]])
                t--, pc[seq[i]] = false;
        }
        for (int i = n; i >= 1; i--)
        {
            if (pc[i] == true)
            {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}