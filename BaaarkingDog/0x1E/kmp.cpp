#include <bits/stdc++.h>
using namespace std;

string s, p;
int ans = 0;

vector<int> failure(string &s)
{
    vector<int> f(s.size());
    int j = 0;
    for (int i = 1; i < s.size(); i++)
    {
        while (j > 0 && s[i] != s[j])
            j = f[j - 1];
        if (s[i] == s[j])
            f[i] = ++j;
    }
    return f;
}

void KMP()
{
    vector<int> f = failure(p);
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        while (j > 0 && s[i] != p[j])
            j = f[j - 1];
        if (s[i] == p[j])
            j++;
        if (j == p.size())
        {
            ans = 1;
            return;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s >> p;
    KMP();
    cout << ans;

    return 0;
}