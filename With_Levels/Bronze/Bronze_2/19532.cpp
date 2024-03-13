// problem: 수학은 비대면강의입니다.
// id: 19542
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    for (int i = -999; i < 1000; i++)
    {
        for (int j = -999; j < 1000; j++)
        {
            if (a * i + b * j == c && d * i + e * j == f)
            {
                cout << i << ' ' << j;
                return 0;
            }
        }
    }

    return 0;
}