// problem: Clay Bully
// id: 4636
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        vector<pair<int, string>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            string s;
            cin >> a >> b >> c >> s;
            v.push_back({a * b * c, s});
        }
        sort(v.begin(), v.end());
        cout << v.back().second << " took clay from " << v.front().second << ".\n";
    }

    return 0;
}