// problem: 사나운 개
// id: 2991
// time taken:
#include <bits/stdc++.h>
using namespace std;
int cs[3];
int at[1000];
int ct[1000];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, p, m, n;
    cin >> a >> b >> c >> d >> p >> m >> n;
    int tic = 0;
    bool isC = true;
    p--;
    m--;
    n--;
    for (int i = 0; i < 1000; i++)
    {
        if (isC)
        {
            if (tic < a)
            {
                at[i] = 1;
                tic++;
            }
            if (tic == a)
            {
                isC = !isC;
                tic = 0;
            }
        }
        else
        {
            if (tic < b)
            {
                at[i] = 0;
                tic++;
            }
            if (tic == b)
            {
                isC = !isC;
                tic = 0;
            }
        }
    }
    tic = 0;
    isC = true;
    for (int i = 0; i < 1000; i++)
    {
        if (isC)
        {
            if (tic < c)
            {
                ct[i] = 1;
                tic++;
            }
            if (tic == c)
            {
                isC = !isC;
                tic = 0;
            }
        }
        else
        {
            if (tic < d)
            {
                ct[i] = 0;
                tic++;
            }
            if (tic == d)
            {
                isC = !isC;
                tic = 0;
            }
        }
    }

    cout << at[p] + ct[p] << '\n';
    cout << at[m] + ct[m] << '\n';
    cout << at[n] + ct[n] << '\n';

    return 0;
}