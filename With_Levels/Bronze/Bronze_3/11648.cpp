// problem: 지속
// id: 11648
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, t;
    cin >> n;
    while (true)
    {
        if (n / 10 == 0)
            break;
        t = 1;
        while (n > 0)
        {
            t *= n % 10;
            n /= 10;
        }
        n = t;
        cnt++;
    }
    cout << cnt;

    return 0;
}