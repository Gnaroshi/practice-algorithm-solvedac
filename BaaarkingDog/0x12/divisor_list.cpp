#include <bits/stdc++.h>
using namespace std;

vector<int> divisor(int n)
{
    vector<int> div;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            div.push_back(i);
    }
    for (int j = (int)div.size() - 1; j >= 0; j--)
    {
        if (div[j] * div[j] == n)
            continue;
        div.push_back(n / div[j]);
    }
    return div;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> ans = divisor(n);
    for (auto i : ans)
        cout << i << ' ';

    return 0;
}