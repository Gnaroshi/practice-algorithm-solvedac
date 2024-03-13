// problem: 홍익 절대평가
// id: 23320
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y, a = 0;
    cin >> n;
    vector<int> stnt(n);
    for (auto &i : stnt)
        cin >> i;
    cin >> x >> y;
    for (auto i : stnt)
        if (i >= y)
            a++;
    cout << x * n / 100 << ' ' << a;

    return 0;
}