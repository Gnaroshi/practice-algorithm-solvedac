// problem: 추첨상 사수 대작전! (Easy)
// id: 20410
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, se, x1, x2;
    cin >> m >> se >> x1 >> x2;
    int t;
    for (int a = 0; a < m; a++)
    {
        for (int c = 0; c < m; c++)
        {
            t = (a * se + c) % m;
            if (t == x1 && (a * t + c) % m == x2)
            {
                cout << a << ' ' << c;
                return 0;
            }
        }
    }

    return 0;
}