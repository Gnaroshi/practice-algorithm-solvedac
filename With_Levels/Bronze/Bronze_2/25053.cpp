// problem: Organizing SWERC
// id: 25053
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
        int n, b, d, s = 0;
        cin >> n;
        int mxb[10] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> b >> d;
            mxb[d - 1] = max(mxb[d - 1], b);
        }
        bool mp = true;
        for (int i = 0; i < 10; i++)
        {
            if (mxb[i] == 0)
            {
                cout << "MOREPROBLEMS\n";
                mp = false;
                break;
            }
            else
                s += mxb[i];
        }
        if (mp)
            cout << s << '\n';
    }

    return 0;
}