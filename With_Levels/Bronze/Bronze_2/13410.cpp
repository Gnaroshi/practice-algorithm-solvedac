// problem: 거꾸로 구구단
// id: 13410
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, mx = -1;
    cin >> n >> k;
    vector<string> v(k);
    for (int i = 1; i <= k; i++)
        v[i - 1] = to_string(n * i);
    for (auto &i : v)
        reverse(i.begin(), i.end());
    for (auto i : v)
        mx = max(mx, stoi(i));
    cout << mx;
    return 0;
}