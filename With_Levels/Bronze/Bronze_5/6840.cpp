#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int cnt = 0;
    while (cin >> n)
    {
        v.push_back(n);
        cnt++;
    }
    sort(v.begin(), v.end());
    cout << v[cnt / 2];

    return 0;
}