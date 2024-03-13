#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<string, int>> v;
vector<string> ans;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a > b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string temp1, temp2;
        cin >> temp1 >> temp2;
        if (temp2 == "enter")
            v.push_back({temp1, 1});
        else
            v.push_back({temp1, -1});
    }
    sort(v.begin(), v.end(), cmp);

    bool isFirst = true;
    string cur = v.front().first;
    int cnt = v.front().second;
    for (auto temp : v)
    {
        // cout << "temp: " << temp.first << " cur: " << cur << '\n';

        if (isFirst)
        {
            isFirst = false;
            continue;
        }
        if (cur == temp.first)
        {
            cnt += temp.second;
        }
        else
        {
            if (cnt > 0)
            {
                ans.push_back(cur);
            }
            cur = temp.first;
            cnt = temp.second;
        }
    }
    if (cnt > 0)
        ans.push_back(cur);

    for (auto temp : ans)
        cout << temp << '\n';

    return 0;
}