// problem: 반올림
// id: 2033
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a = 10, b = 1;
    cin >> n;
    int iter = to_string(n).length() - 1;
    for (int i = 0; i < iter; i++)
    {
        if ((n % a - n % b) / b >= 5)
            n += a;
        n -= n % a;
        a *= 10;
        b *= 10;
    }
    cout << n;

    return 0;
}