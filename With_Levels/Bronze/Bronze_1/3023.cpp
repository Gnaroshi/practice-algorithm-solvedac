// problem: 마술사 이민혁
// id: 3023
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int r, c, a, b;
    cin >> r >> c;
    vector<string> v(r);
    for (int i = 0; i < r; i++)
    {
        cin >> s;
        v[i] = s;
        reverse(s.begin(), s.end());
        v[i] += s;
    }
    cin >> a >> b;
    for (int i = 0; i < r; i++)
        v.push_back(v[r - i - 1]);
    if (v[a - 1][b - 1] == '.')
        v[a - 1][b - 1] = '#';
    else
        v[a - 1][b - 1] = '.';
    for (auto i : v)
        cout << i << '\n';

    return 0;
}