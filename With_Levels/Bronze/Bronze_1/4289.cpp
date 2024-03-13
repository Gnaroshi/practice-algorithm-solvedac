// problem: Rock-Paper-Scissors Tournament
// id: 4289
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn(char a, char b)
{
    // a win 1, b win -1
    if (a == b)
        return 0;
    if (a == 'r')
    {
        if (b == 'p')
            return -1;
        else
            return 1;
    }
    else if (a == 'p')
    {
        if (b == 's')
            return -1;
        else
            return 1;
    }
    else
    {
        if (b == 'r')
            return -1;
        else
            return 1;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, pa, pb, iter, t;
    string ma, mb;
    cout << fixed;
    cout.precision(3);
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        cin >> k;
        iter = k * n * (n - 1) / 2;
        int *w = new int[n + 1];
        int *l = new int[n + 1];
        fill(w, w + n + 1, 0);
        fill(l, l + n + 1, 0);
        for (int i = 0; i < iter; i++)
        {
            cin >> pa >> ma >> pb >> mb;
            t = fn(ma[0], mb[0]);
            if (pa == pb)
                continue;
            if (t > 0)
            {
                w[pa]++;
                l[pb]++;
            }
            else if (t < 0)
            {
                w[pb]++;
                l[pa]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (w[i] + l[i] != 0)
                cout << round(w[i] / double(w[i] + l[i]) * 1000) / 1000.0 << '\n';
            else
                cout << "-\n";
        }
        cout << '\n';
    }

    return 0;
}
