// problem: Adding Commas
// id: 5949
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int iter = s.length();
    vector<char> ans;
    int cnt = 1;
    for (int i = iter - 1; i >= 0; i--)
    {
        ans.push_back(s[i]);
        if (cnt % 3 == 0 && i != 0)
            ans.push_back(',');
        cnt++;
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i;

    return 0;
}
