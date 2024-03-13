#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int temp_len;
    string temp;
    cin >> temp_len >> temp;
    int ans = 0;
    for (int i = 0; i < temp_len; i++)
    {
        if (temp[i] == 'a' || temp[i] == 'i' || temp[i] == 'e' || temp[i] == 'u' || temp[i] == 'o')
            ans++;
    }
    cout << ans << '\n';
    return 0;
}