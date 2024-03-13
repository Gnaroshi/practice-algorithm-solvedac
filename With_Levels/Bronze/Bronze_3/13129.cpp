// problem: Disposable Cup
// id: 13129
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n;
    cin >> a >> b >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a * n + b * i << ' ';
    }

    return 0;
}