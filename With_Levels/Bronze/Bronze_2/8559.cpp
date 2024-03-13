// problem: Potęga
// id: 8559
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n;
    int ans[4] = {6, 2, 4, 8};
    if (s.length() <= 1)
    {
        n = s[s.length() - 1] - '0';
        if (n == 0)
            cout << 1;
        else
            cout << ans[n % 4];
    }
    else
    {
        n = stoi(s.substr(s.length() - 2, 2));
        cout << ans[n % 4];
    }

    return 0;
}