#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> subs;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            subs.push_back(i);
        if (subs.size() == k)
            break;
    }
    if (subs.size() < k)
        cout << 0 << '\n';
    else
        cout << subs.back() << '\n';

    return 0;
}