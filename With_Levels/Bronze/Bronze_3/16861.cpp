// problem: Harshad Numbers
// id: 16861
// time taken:
#include <bits/stdc++.h>
using namespace std;

int ds(int a)
{
    int t = 0;
    while (a > 0)
    {
        t += a % 10;
        a /= 10;
    }
    return t;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (true)
    {
        if (n % ds(n) == 0)
            break;
        n++;
    }
    cout << n;

    return 0;
}