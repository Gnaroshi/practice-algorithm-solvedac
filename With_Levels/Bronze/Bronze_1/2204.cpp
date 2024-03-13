// problem: 도비의 난독증 테스트
// id: 2204
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
        if (!n)
            break;
        vector<pair<string, string>> v;
        for (int i = 0; i < n; i++)
        {
            string s, t = "";
            cin >> s;
            for (auto i : s)
                t += tolower(i);
            v.push_back({t, s});
        }
        sort(v.begin(), v.end());
        cout << v.front().second << '\n';
    }

    return 0;
}