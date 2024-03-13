#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    cin >> n >> l;

    int loc = -1;
    bool flag = false;
    for (int i = l; i <= 100; i++)
    {
        if ((n - ((i - 1) * i) / 2) % i == 0 && n >= ((i - 1) * i) / 2)
        {
            flag = true;
            loc = i;
            break;
        }
    }
    if (flag)
    {
        int t = (n - ((loc - 1) * loc) / 2) / loc;
        for (int i = 0; i < loc; i++)
            cout << t + i << ' ';
    }
    else
        cout << -1;

    return 0;
}