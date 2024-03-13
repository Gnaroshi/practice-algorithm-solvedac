// problem: Holes
// id: 3578
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n == 0 || n == 1)
        cout << abs(1 - n);
    else
    {
        if (n % 2 == 1)
        {
            cout << 4;
            n--;
        }
        int iter = n / 2;
        for (int i = 0; i < iter; i++)
            cout << 8;
    }

    return 0;
}