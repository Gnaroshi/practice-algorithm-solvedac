// problem: Cakes
// id: 21212
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mn = 0x3f3f3f3f;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mn = min(mn, b / a);
    }
    cout << mn;

    return 0;
}