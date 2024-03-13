// problem: Good Fours and Good Fives
// id: 24573
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    for (int i = 0;; i += 4)
    {
        if (i > n)
            break;
        if ((n - i) % 5 == 0)
            cnt++;
    }
    cout << cnt;

    return 0;
}