// problem: iChess
// id: 3602
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, w;
    cin >> b >> w;
    if (b > w)
        swap(b, w);
    if (b + w == 0)
        cout << "Impossible";
    else
    {
        for (int i = 1;; i++)
        {
            int t1 = i * i / 2, t2 = t1;
            if (i % 2)
                t1++;
            if (t1 > w || t2 > b)
            {
                cout << i - 1;
                break;
            }
        }
    }

    return 0;
}