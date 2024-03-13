// problem: 우유가 넘어지면?
// id: 17363
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    string s;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;

    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j][i] == '-')
                cout << '|';
            else if (v[j][i] == '|')
                cout << '-';
            else if (v[j][i] == '/')
                cout << '\\';
            else if (v[j][i] == '\\')
                cout << '/';
            else if (v[j][i] == '^')
                cout << '<';
            else if (v[j][i] == '<')
                cout << 'v';
            else if (v[j][i] == 'v')
                cout << '>';
            else if (v[j][i] == '>')
                cout << '^';
            else
                cout << v[j][i];
        }
        cout << '\n';
    }

    return 0;
}