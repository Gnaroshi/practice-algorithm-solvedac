// problem: Строка
// id: 21406
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string ans = "";
    for (int i = 1; i <= n; i++)
    {
        string n = to_string(i);
        if (ans.find(n) == string::npos)
            ans.append(n);
    }
    cout << ans;

    return 0;
}