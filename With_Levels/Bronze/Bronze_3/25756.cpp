// problem: 방어율 무시 계산하기
// id: 25756
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    double cur, bef = 0, t;
    cout << fixed;
    cout.precision(7);
    cin >> bef;
    cout << bef << '\n';
    for (int i = 1; i < n; i++)
    {
        cin >> cur;
        cout << (1.0 - (1.0 - bef / 100.0) * (1.0 - cur / 100.0)) * 100.0 << '\n';
        bef = (1.0 - (1.0 - bef / 100.0) * (1.0 - cur / 100.0)) * 100.0;
    }

    return 0;
}