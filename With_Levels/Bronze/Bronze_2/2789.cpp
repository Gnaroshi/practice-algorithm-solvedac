// problem: 유학 금지
// id: 2789
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, c = "CAMBRIDGE";
    cin >> s;
    for (auto i : s)
    {
        if (c.find(i) == string::npos)
            cout << i;
    }

    return 0;
}