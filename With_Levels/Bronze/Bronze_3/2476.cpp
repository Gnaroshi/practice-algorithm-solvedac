#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && b == c)
        {
            v.push_back(10000 + a * 1000);
        }
        else if (a == b || b == c || c == a)
        {
            if (a == b)
                v.push_back(1000 + a * 100);
            else if (b == c)
                v.push_back(1000 + b * 100);
            else
                v.push_back(1000 + c * 100);
        }
        else
        {
            int mx = max(max(a, b), c);
            v.push_back(mx * 100);
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << v.front() << '\n';

    return 0;
}