#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> M;
    for (int i = 0; i < n; i++)
    {
        string tempA, tempB;
        cin >> tempA >> tempB;
        M.insert(make_pair(tempA, tempB));
    }

    for (int i = 0; i < m; i++)
    {
        string temp;
        cin >> temp;
        auto iter = M.find(temp);
        cout << iter->second << '\n';
    }

    return 0;
}
