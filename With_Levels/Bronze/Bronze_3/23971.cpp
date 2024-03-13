// problem: ZOAC 4
// id: 23971
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, n, m;
    cin >> h >> w >> n >> m;

    n++;
    m++;
    if (h % n != 0)
    {
        h -= h % n;
        h += n;
    }
    if (w % m != 0)
    {
        w -= w % m;
        w += m;
    }
    cout << h / n * w / m;

    return 0;
}