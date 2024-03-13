// problem: Even or Odd?
// id: 18005
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    if (n % 2 == 1)
        cout << 0;
    else
    {
        n /= 2;
        if (n % 2 == 1)
            cout << 1;
        else
            cout << 2;
    }

    return 0;
}
