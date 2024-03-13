// problem: Shifty Sum
// id: 14682
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int t = 0;
    for (int i = 0; i <= k; i++)
    {
        t += n;
        n *= 10;
    }
    cout << t;

    return 0;
}