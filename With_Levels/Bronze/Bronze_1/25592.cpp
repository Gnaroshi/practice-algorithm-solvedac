// problem: 바둑돌 게임
// id: 25592
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i;
    cin >> n;
    for (i = 1;; i++)
    {
        if (i > n)
            break;
        n -= i;
    }
    if (i % 2)
        cout << i - n;
    else
        cout << 0;

    return 0;
}