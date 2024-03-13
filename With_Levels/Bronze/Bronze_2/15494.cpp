// problem: Davor
// id: 15494
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int x, k;

    for (int i = 0; i <= 100; i++)
    {
        for (int j = 1; j <= 300; j++)
        {
            if (52 * (7 * i + 21 * j) == n)
            {
                x = i;
                k = j;
            }
        }
    }
    cout << x << '\n'
         << k;

    return 0;
}