// problem: Прямоугольный полигон
// id: 29644
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, p;
    cin >> s >> p;
    if (p % 2)
    {
        cout << -1;
        return 0;
    }
    for (int i = 1;; i++)
    {
        if (i > s || i > p)
            break;
        for (int j = 1;; j++)
        {
            if (j > s || j > p)
                break;
            if (i * j == s && 2 * (i + j) == p)
            {
                cout << j << ' ' << i;
                return 0;
            }
        }
    }
    cout << -1;

    return 0;
}