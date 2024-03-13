// problem: Incomplete Book
// id: 15151
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, d;
    cin >> k >> d;
    int cnt = 0, s = 0;
    while (s <= d)
    {
        cnt++;
        s += k;
        k *= 2;
    }
    cout << cnt - 1;

    return 0;
}