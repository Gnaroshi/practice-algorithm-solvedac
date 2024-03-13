// problem: Eszett
// id: 28373
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
    vector<int> v;
    for (int i = 0; i < iter; i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] == 's')
            v.push_back(i);
    }
    cout << s << '\n';
    if (v.size() == 2)
    {
        if (v[0] + 1 == v[1])
            cout << s.substr(0, v[0]) << 'B' << s.substr(v[1] + 1) << '\n';
    }
    else if (v.size() == 3)
    {
        if (v[0] + 1 == v[1])
            cout << s.substr(0, v[0]) << 'B' << s.substr(v[1] + 1) << '\n';
        if (v[1] + 1 == v[2])
            cout << s.substr(0, v[1]) << 'B' << s.substr(v[2] + 1) << '\n';
    }

    return 0;
}