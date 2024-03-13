#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
    return a < b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, int> M;
    vector<string> V(m);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        M.insert(make_pair(temp, i));
    }

    for (int i = 0; i < m; i++)
    {
        string temp;
        cin >> temp;
        auto iter = M.find(temp);
        if (iter != M.end())
        {
            V[cnt] = iter->first;
            cnt++;
        }
    }
    sort(V.begin(), V.end(), compare);

    cout << cnt << '\n';
    for (auto s : V)
    {
        if (s != "")
        {

            cout << s << '\n';
        }
    }
    return 0;
}