// problem: Federation Favorites
// id: 10181
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int *chk = (int *)malloc(sizeof(int) * 100001);
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        fill(chk, chk + 100001, 0);
        int iter = n / 2;
        for (int i = 1; i <= iter; i++)
        {
            if (n % i == 0)
                chk[i] = 1;
        }
        int t = 0;
        int last = -1;
        for (int i = 1; i <= iter; i++)
        {
            if (chk[i] == 1)
            {
                t += i;
                last = i;
            }
        }
        if (t == n)
        {
            cout << n << " = ";
            for (int i = 1; i <= iter; i++)
            {
                if (chk[i] == 1)
                {
                    cout << i;
                    if (i != last)
                        cout << " + ";
                }
            }
            cout << '\n';
        }
        else
            cout << n << " is NOT perfect.\n";
    }

    return 0;
}