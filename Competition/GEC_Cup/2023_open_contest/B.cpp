// problem: B번 - 특별한 작은 분수
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int x, n;
    cin >> x >> n;
    while (n--)
    {
        if (x % 2 == 0)
        {
            x >>= 1;
            x ^= 6;
        }
        else
        {
            x <<= 1;
            x ^= 6;
        }
    }
    cout << x;

    return 0;
}