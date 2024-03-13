// problem: Marbles Tell Your Lucky Number
// id: 23722
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[4];
    while (true)
    {
        int ts = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
            ts += a[i];
        }
        if (ts == 0)
            break;

        while (true)
        {
            int chk = 0, mn = 1000;
            for (int i = 0; i < 4; i++)
            {
                if (a[i] == 0)
                {
                    chk++;
                    continue;
                }
                mn = min(mn, a[i]);
            }
            if (chk == 3)
            {
                cout << *max_element(a, a + 4) << '\n';
                break;
            }
            bool mnf = true;
            for (int i = 0; i < 4; i++)
            {
                if (a[i] == mn && mnf)
                {
                    mnf = false;
                    continue;
                }
                a[i] = max(0, a[i] - mn);
            }
        }
    }

    return 0;
}