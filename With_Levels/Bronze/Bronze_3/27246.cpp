// problem: Различные квадраты
// id: 27246
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    long long m = 1;
    while (n > 0)
    {
        n -= m * m;
        if (n < 0)
            break;
        m++;
    }
    cout << m - 1;

    return 0;
}