#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l, d;
    cin >> n >> l >> d;

    int t[50000];
    fill(t, t + 50000, 0);

    int loc = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            t[loc] = 1;
            loc++;
        }
        loc += 5;
    }
    int temp = 0;
    while (true)
    {
        if (t[temp] == 0)
        {
            cout << temp << '\n';
            break;
        }
        temp += d;
    }

    return 0;
}