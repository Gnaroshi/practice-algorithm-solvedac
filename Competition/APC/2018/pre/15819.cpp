#include <bits/stdc++.h>
using namespace std;

int n, l;
vector<string> v;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    cout << v[l - 1] << '\n';

    return 0;
}