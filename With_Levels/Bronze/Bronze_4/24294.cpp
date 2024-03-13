// problem: ГРАДИНА
// id: 24294
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << (w1 + h1 + w2 + h2) * 2 - min(w1, w2) * 2 + 4;

    return 0;
}