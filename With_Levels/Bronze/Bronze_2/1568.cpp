// problem: 새
// id: 1568
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, k = 1;
    cin >> n;
    while (n != 0)
    {
        if (n < k)
            k = 1;
        n -= k;
        cnt++;
        k++;
    }
    cout << cnt;

    return 0;
}