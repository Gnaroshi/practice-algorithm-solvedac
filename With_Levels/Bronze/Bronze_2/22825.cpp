// problem: Fermat's Last Theorem
// id: 22825
// time taken:
#include <bits/stdc++.h>
using namespace std;

int z[1112];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i < 1112; i++)
    {
        int t = i * i * i, mx = 0, t2;
        for (int j = 1;; j++)
        {
            t2 = j * j * j;
            if (t2 > t)
                break;
            for (int k = 1;; k++)
            {
                if (t2 + k * k * k <= t)
                {
                    mx = max(mx, t2 + k * k * k);
                }
                else
                    break;
            }
        }
        z[i] = mx;
    }
    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        cout << n * n * n - z[n] << '\n';
    }

    return 0;
}