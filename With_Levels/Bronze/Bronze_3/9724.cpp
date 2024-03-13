// problem: Perfect Cube
// id: 9724
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll c[1270];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < 1270; i++)
        c[i] = i * i * i;
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        ll a, b;
        cin >> a >> b;
        int l = 0;
        int r = 1270;
        while (true)
        {
            if (c[l + 1] >= a)
                break;
            l++;
        }
        while (true)
        {
            if (c[r - 1] <= b)
                break;
            r--;
        }
        cout << "Case #" << i << ": " << r - l - 1 << '\n';
    }

    return 0;
}