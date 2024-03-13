#include <bits/stdc++.h>
using namespace std;

int d[1000005];
int node_from[1000005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    d[1] = 0;
    node_from[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + 1;
        node_from[i] = i - 1;

        if (i % 2 == 0)
        {
            if (d[i] > d[i / 2] + 1)
            {
                d[i] = d[i / 2] + 1;
                node_from[i] = i / 2;
            }
        }

        if (i % 3 == 0)
        {
            if (d[i] > d[i / 3] + 1)
            {
                d[i] = d[i / 3] + 1;
                node_from[i] = i / 3;
            }
        }
    }

    cout << d[n] << '\n';

    // for printing path
    int temp = n;
    while (true)
    {
        cout << temp << ' ';
        if (temp == 1)
            break;
        else
            temp = node_from[temp];
    }

    return 0;
}