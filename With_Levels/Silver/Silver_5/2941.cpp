// problem: 크로아티아 알파벳
// id: 2941
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string temp;
    cin >> temp;
    int iter = temp.length();
    int ans = 0;
    if (iter == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < iter; i++)
    {
        if (iter - i >= 3 && temp[i] == 'd')
        {
            if (temp[i + 1] == 'z' && temp[i + 2] == '=')
                i += 2;
            else if (temp[i] == 'd' && temp[i + 1] == '-')
                i += 1;
            ans++;
        }
        else if (iter - i >= 2)
        {
            if (temp[i] == 'c')
            {
                if (temp[i + 1] == '=' || temp[i + 1] == '-')
                    i += 1;
            }
            else if (temp[i] == 'd' && temp[i + 1] == '-')
                i += 1;
            else if (temp[i] == 'l' && temp[i + 1] == 'j')
                i += 1;
            else if (temp[i] == 'n' && temp[i + 1] == 'j')
                i += 1;
            else if (temp[i] == 's' && temp[i + 1] == '=')
                i += 1;
            else if (temp[i] == 'z' && temp[i + 1] == '=')
                i += 1;
            ans++;
        }
        else
            ans++;
    }
    cout << ans << '\n';

    return 0;
}