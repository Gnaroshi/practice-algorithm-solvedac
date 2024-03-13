// problem: 문어
// id: 21313
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n % 2)
    {
        for (int i = 0; i < n - 1; i++)
            cout << i % 2 + 1 << ' ';
        cout << 3;
    }
    else
        for (int i = 0; i < n; i++)
            cout << i % 2 + 1 << ' ';

    return 0;
}