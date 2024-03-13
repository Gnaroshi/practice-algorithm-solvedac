// problem: 거울반사
// id: 25755
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char w;
    int n, iter;
    cin >> w >> n;
    vector<string> v;
    cin.ignore();
    iter = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        for (int j = 0; j < iter; j++)
        {
            if (s[j] == '2')
                s[j] = '5';
            else if (s[j] == '5')
                s[j] = '2';
            else if (s[j] == '1' || s[j] == '8')
                continue;
            else if (s[j] != ' ')
                s[j] = '?';
        }
        v.push_back(s);
    }
    if (w == 'L' || w == 'R')
    {
        for (int i = 0; i < n; i++)
        {
            reverse(v[i].begin(), v[i].end());
            cout << v[i] << '\n';
        }
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
            cout << v[i] << '\n';
    }

    return 0;
}