#include <bits/stdc++.h>
using namespace std;

unordered_set<string> us;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        string name, log;
        cin >> name >> log;
        if (log == "enter")
            us.insert(name);
        else
            us.erase(name);
    }

    vector<string> ans(us.begin(), us.end());
    sort(ans.begin(), ans.end(), greater<string>());
    for (auto x : ans)
        cout << x << '\n';

    return 0;
}