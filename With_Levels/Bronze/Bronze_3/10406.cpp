// problem: The fellowship of the ring
// id: 10406
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, n, p, t;
    int a = 0;
    cin >> w >> n >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> t;
        if (t >= w && t <= n)
            a++;
    }
    cout << a;

    return 0;
}