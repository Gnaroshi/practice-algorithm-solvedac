// problem: Fence Painting
// id: 11970
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, cnt = 0;
    cin >> a >> b >> c >> d;
    int f[101] = {0};

    for (int i = a; i < b; i++)
        f[i] = 1;
    for (int i = c; i < d; i++)
        f[i] = 1;
    for (int i = 0; i < 101; i++)
        if (f[i])
            cnt++;
    cout << cnt;

    return 0;
}