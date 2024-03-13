// problem: 소트인사이드
// id: 1427
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    ll dig[10];
    fill(dig, dig + 10, 0);
    int loc = 0;
    cin >> n;
    while (true)
    {
        if (n == 0)
            break;
        dig[loc] = n % 10;
        n /= 10;
        loc++;
    }
    sort(dig, dig + loc, greater<int>());
    for (int i = 0; i < loc; i++)
        cout << dig[i];

    return 0;
}