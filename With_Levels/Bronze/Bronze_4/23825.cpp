#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int min_sa = min(n, m);
    if (min_sa % 2 == 1)
        min_sa--;
    cout << min_sa / 2 << '\n';

    return 0;
}