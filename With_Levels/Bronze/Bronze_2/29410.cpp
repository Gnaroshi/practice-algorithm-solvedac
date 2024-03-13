// problem: Дома
// id: 29410
// time taken:
#include <bits/stdc++.h>
using namespace std;

pair<int, int> fn(int n)
{
    int ra = 0, rb = 0;
    while (n > 0)
    {
        if (n % 2)
            rb++;
        else
            ra++;
        n /= 2;
    }
    return {ra, rb};
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c, ai, ans = 0, x = 0, y = 0;
    pair<int, int> ci;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> ai;
        for (int j = 0; j < ai; j++)
        {
            cin >> c;
            ci = fn(c);
            x += ci.first;
            y += ci.second;
        }
    }
    cout << x * a + y * b;

    return 0;
}