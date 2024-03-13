// problem: 이진수 변환
// id: 10829
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<int> v;
    while (n > 0)
    {
        v.emplace_back(n % 2);
        n /= 2;
    }
    reverse(v.begin(), v.end());
    for (auto i : v)
        cout << i;

    return 0;
}