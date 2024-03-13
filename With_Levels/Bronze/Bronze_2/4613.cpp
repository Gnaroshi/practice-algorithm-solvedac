#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (true)
    {
        string temp;
        getline(cin, temp);
        int iter = temp.length();
        if (iter == 1 && temp[0] == '#')
            break;

        int ans = 0;
        for (int i = 0; i < iter; i++)
        {
            if (temp[i] >= 'A' && temp[i] <= 'Z')
            {
                ans += (temp[i] - 'A' + 1) * (i + 1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
