// problem: 팰린드롬
// id: 13235
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length(), ih = iter / 2;
    for (int i = 0; i < ih; i++)
    {
        if (s[i] != s[iter - i - 1])
        {
            cout << "false";
            return 0;
        }
    }
    cout << "true";

    return 0;
}