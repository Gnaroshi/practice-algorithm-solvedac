// problem: 2023년은 검은 토끼의 해
// id: 27494
// time taken:
#include <bits/stdc++.h>
using namespace std;

int d[4] = {2, 0, 2, 3};

bool fn(int i)
{
    int dl = 3;
    while (i > 0)
    {
        if (i % 10 == d[dl])
            dl--;
        i /= 10;
    }
    return (dl < 0);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans += fn(i);
    }
    cout << ans;

    return 0;
}