// problem: Combination Lock
// id: 4117
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c;
    while (true)
    {
        cin >> n >> a >> b >> c;
        if (n + a + b + c == 0)
            break;
        int cnt = 0;
        cnt += n * 4 - 1;
        cnt += (b - a + n) % n;
        cnt += (b - c + n) % n;

        cout << cnt << '\n';
    }

    return 0;
}