// problem: Collatz Conjecture
// id: 13236
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n != 1)
    {
        cout << n << ' ';
        if (n % 2 == 0)
            n /= 2;
        else
        {
            n *= 3;
            n++;
        }
    }
    cout << 1;

    return 0;
}