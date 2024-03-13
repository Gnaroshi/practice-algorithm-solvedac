// problem: Junior price robot
// id: 24246
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, bef;
    cin >> n >> bef;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        if (t <= bef)
        {
            cout << i;
            return 0;
        }
    }
    cout << "infinity";

    return 0;
}