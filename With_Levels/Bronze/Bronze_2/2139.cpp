// problem: 나는 너가 살아온 날을 알고 있다
// id: 2139
// time taken:
#include <bits/stdc++.h>
using namespace std;

int mt[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, m, y;
    while (true)
    {
        cin >> d >> m >> y;
        if (d + m + y == 0)
            break;
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
            mt[1] = 29;
        else
            mt[1] = 28;
        int ans = 0;
        for (int i = 0; i < m - 1; i++)
            ans += mt[i];
        cout << ans + d << '\n';
    }

    return 0;
}