// problem: gus
// id: 3208
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    cout << (min(n, m) - 1) * 2 + (n > m);

    return 0;
}