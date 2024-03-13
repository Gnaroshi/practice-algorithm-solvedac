// problem: Flower Festival
// id: 28225
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, f;
    cin >> n >> f;
    double mn = 0x3f3f3f3f;
    int ml = -1;
    for (int i = 1; i <= n; i++)
    {
        double x, v;
        cin >> x >> v;
        if (mn > (f - x) / v)
        {
            mn = (f - x) / v;
            ml = i;
        }
    }
    cout << ml;

    return 0;
}