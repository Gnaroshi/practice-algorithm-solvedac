// problem: 3n+1 수열
// id: 14920
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    int cnt = 1;
    while (true)
    {
        if (n == 1)
        {
            cout << cnt;
            break;
        }
        if (n % 2 == 1)
            n = 3 * n + 1;
        else
            n /= 2;
        cnt++;
    }

    return 0;
}