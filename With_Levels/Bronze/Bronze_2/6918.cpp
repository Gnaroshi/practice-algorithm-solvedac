// problem: The Students' Council Breakfast
// id: 6918
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, g, r, o, mn = 0x3f3f3f3f, tot, cm = 0;
    cin >> p >> g >> r >> o >> tot;
    for (int i = 0;; i++)
    {
        if (i * p > tot)
            break;
        for (int j = 0;; j++)
        {
            if (i * p + j * g > tot)
                break;
            for (int k = 0;; k++)
            {
                if (i * p + j * g + k * r > tot)
                    break;
                for (int l = 0;; l++)
                {
                    if (i * p + j * g + k * r + l * o > tot)
                        break;
                    else if (i * p + j * g + k * r + l * o == tot)
                    {
                        cout << "# of PINK is " << i << " # of GREEN is " << j << " # of RED is " << k << " # of ORANGE is " << l << "\n";
                        cm++;
                        mn = min(mn, i + j + k + l);
                    }
                }
            }
        }
    }
    cout << "Total combinations is " << cm << ".\n";
    cout << "Minimum number of tickets to print is " << mn << ".\n";

    return 0;
}