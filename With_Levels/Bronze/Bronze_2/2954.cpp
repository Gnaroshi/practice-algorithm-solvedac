// problem: 창영이의 일기장
// id: 2954
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int iter = s.length();
    string ans = "";
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            ans.push_back(s[i]);
            i += 2;
        }
        else
            ans.push_back(s[i]);
    }
    cout << ans;

    return 0;
}