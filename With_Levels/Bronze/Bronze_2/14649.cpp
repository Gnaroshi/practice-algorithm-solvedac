// problem: 문홍안
// id: 14649
// time taken:
#include <bits/stdc++.h>
using namespace std;

int r[101];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double p;
    int n, l;
    char cd;
    cin >> p >> n;
    while (n--)
    {
        cin >> l >> cd;
        if (cd == 'R')
            for (int i = l + 1; i <= 100; i++)
                r[i]++;
        else
            for (int i = l - 1; i >= 1; i--)
                r[i]++;
    }
    double a[3] = {0};
    for (int i = 1; i <= 100; i++)
        a[r[i] % 3]++;
    cout << fixed;
    cout.precision(2);
    for (int i = 0; i < 3; i++)
    {
        cout << p * a[i] / 100.0 << '\n';
    }

    return 0;
}