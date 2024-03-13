// problem: Deal or No Deal Calculator
// id: 6842
// time taken:
#include <bits/stdc++.h>
using namespace std;

double bf[] = {0, 100, 500,
               1000, 5000,
               10000, 25000,
               50000, 100000,
               500000, 1000000};

bool chk[11];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fill(chk, chk + 11, 1);
    double b, bs = 0;
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        chk[t] = 0;
    }
    cin >> b;
    for (int i = 1; i <= 10; i++)
        bs += chk[i] * bf[i];

    if (bs / (10 - n) >= b)
        cout << "no ";
    cout << "deal";

    return 0;
}