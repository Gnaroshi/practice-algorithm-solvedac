// problem: Dice Cup
// id: 11680
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    if (n > m)
        swap(n, m);
    for (int i = n + 1; i <= m + 1; i++)
        cout << i << '\n';

    return 0;
}