// problem: Polynomial Boundaries
// id: 11327
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y, t, m;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        cin >> x >> y;
        m = 1, t = 0;
        for (auto i : v)
        {
            t += i * m;
            m *= x;
        }
        if (t < y)
            cout << "Outside\n";
        else if (t > y)
            cout << "Inside\n";
        else
            cout << "On\n";
    }

    return 0;
}