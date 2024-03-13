// problem: Ropes
// id: 4818
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int p, s = 0, mx = 0;
        while (n--)
        {
            cin >> p;
            s += p;
            mx = max(mx, p);
        }
        for (auto i : {50, 60, 70})
        {
            if (i < s * 2)
                cout << 0 << ' ';
            else
                cout << i / mx + 1 << ' ';
        }
        cout << '\n';
    }

    return 0;
}