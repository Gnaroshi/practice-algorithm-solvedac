// problem: 앵그리 창영
// id: 3034
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double w, h, d;
    cin >> n >> w >> h;
    d = sqrt(w * w + h * h);
    for (int i = 0; i < n; i++)
    {
        double t;
        cin >> t;
        cout << ((d >= t) ? "DA" : "NE") << '\n';
    }

    return 0;
}