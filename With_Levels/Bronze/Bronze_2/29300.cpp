// problem: Назначения
// id: 29300
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    vector<string> v;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < 26; i++)
    {
        string t = "";
        char c = char('a' + i);
        for (int j = 0; j < iter; j++)
        {
            if (s[j] != c)
                t += s[j];
        }
        v.emplace_back(t);
    }
    for (int i = 0; i < 10; i++)
    {
        string t = "";
        char c = char('0' + i);
        for (int j = 0; j < iter; j++)
        {
            if (s[j] != c)
                t += s[j];
        }
        v.emplace_back(t);
    }
    string t = "";
    char c = '_';
    for (int j = 0; j < iter; j++)
    {
        if (s[j] != c)
            t += s[j];
    }
    v.emplace_back(t);
    sort(v.begin(), v.end());
    cout << v.front();

    return 0;
}