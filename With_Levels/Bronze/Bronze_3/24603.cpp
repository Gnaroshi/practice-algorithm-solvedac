// problem: Scaling Recipe
// id: 24603
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y, t;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cout << t * y / x << '\n';
    }

    return 0;
}