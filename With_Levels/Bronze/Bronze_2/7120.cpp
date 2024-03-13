// problem: String
// id: 7120
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, a = "";
    cin >> s;
    char bef = s[0];
    int iter = s.length();
    for (int i = 1; i < iter; i++)
    {
        if (s[i] == bef)
            continue;
        a.push_back(bef);
        bef = s[i];
    }
    a.push_back(bef);
    cout << a;

    return 0;
}