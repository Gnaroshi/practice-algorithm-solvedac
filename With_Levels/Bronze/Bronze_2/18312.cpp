// problem: 시각
// id: 18312
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, cnt = 0;
    cin >> n >> k;
    for (int h = 0; h <= n; h++)
        for (int m = 0; m < 60; m++)
            for (int s = 0; s < 60; s++)
                if (h == k || m == k || s == k || h % 10 == k || m % 10 == k || s % 10 == k || h / 10 == k || m / 10 == k || s / 10 == k)
                    cnt++;
    cout << cnt;

    return 0;
}