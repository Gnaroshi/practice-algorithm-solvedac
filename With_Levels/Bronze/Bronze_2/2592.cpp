// problem: 대표값
// id: 2592
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[1001] = {0};
    int s = 0, t, mx = -1, a;
    for (int i = 0; i < 10; i++)
    {
        cin >> t;
        s += t;
        n[t]++;
    }

    for (int i = 0; i < 1001; i++)
    {
        if (mx < n[i])
        {
            mx = n[i];
            a = i;
        }
    }
    cout << s / 10 << '\n'
         << a;

    return 0;
}