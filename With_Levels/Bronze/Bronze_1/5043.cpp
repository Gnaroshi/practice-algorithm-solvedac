// problem: 정말 좋은 압축
// id: 5043
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, b, cnt = 0;
    cin >> n >> b;
    while (n)
    {
        n /= 2;
        cnt++;
    }
    if (cnt - 1 <= b)
        cout << "yes";
    else
        cout << "no";

    return 0;
}