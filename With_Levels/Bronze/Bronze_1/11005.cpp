// problem: 진법 변환 2
// id: 11005
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<char> v;
    ll n, b;
    cin >> n >> b;
    while (n > 0)
    {
        int r = n % b;
        if (r > 9)
            v.push_back((char)(r + 'A' - 10));
        else
            v.push_back((char)(r + '0'));
        n /= b;
    }
    reverse(v.begin(), v.end());
    for (auto c : v)
        cout << c;

    return 0;
}