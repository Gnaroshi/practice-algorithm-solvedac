// problem: AUTORI
// id: 2902
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    vector<char> ans;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            ans.push_back(s[i]);
    }
    for (auto i : ans)
        cout << i;

    return 0;
}