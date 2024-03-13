// problem: Shattered Cake
// id: 15415
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, n, a, b, t = 0;
    cin >> w >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        t += a * b;
    }
    cout << t / w;

    return 0;
}
