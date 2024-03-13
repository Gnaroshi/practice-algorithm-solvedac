// problem: Fred’s Lotto Tickets
// id: 4118
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        bool chk = true;
        bool cnt[49] = {false};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                cin >> t;
                cnt[t - 1] = 1;
            }
        }
        for (int i = 0; i < 49; i++)
        {
            if (!cnt[i])
            {
                chk = false;
                break;
            }
        }
        if (chk)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}