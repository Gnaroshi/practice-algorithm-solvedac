// problem: Эксперимент
// id: 29558
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d, t;
    cin >> n >> d;
    t = n / 2;
    for (int i = d - t; i < d; i++)
        cout << i << ' ';
    if (n % 2)
        cout << d << ' ';
    for (int i = d + 1; i <= d + t; i++)
        cout << i << ' ';

    return 0;
}