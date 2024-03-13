// problem: Hour for a Run
// id: 17536
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double v, n;
    cin >> v >> n;
    for (int i = 1; i < 10; i++)
        cout << int(ceil((v * n * double(i)) / 10.0)) << (i != 9 ? ' ' : '\n');

    return 0;
}