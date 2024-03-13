#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp;
    cin >> temp;
    int ans = 0;
    int iter = temp.length();
    ans += iter;
    for (int i = 0; i < iter; i++)
    {
        if (temp[i] == ':')
            ans++;
        if (temp[i] == '_')
            ans += 5;
    }
    cout << ans << '\n';

    return 0;
}