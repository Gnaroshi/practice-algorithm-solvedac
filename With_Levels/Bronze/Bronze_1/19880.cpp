// problem: Номер страницы
// id: 19880
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length() / 2, ans = iter;
    for (int i = 1; i < iter; i++)
    {
        if (s[i] == '0')
            ans--;
    }
    if (s[0] == '0')
        cout << 0;
    else
    {
        if (s.length() % 2 == 0)
        {
            if (s[iter] == '0')
                ans--;
            else
            {
                string a = s.substr(0, iter), b = s.substr(iter);
                bool chk = false;
                for (int i = 0; i < iter; i++)
                {
                    if (a[i] > b[i])
                    {
                        chk = true;
                        break;
                    }
                    else if (a[i] < b[i])
                        break;
                }
                if (chk)
                    ans--;
            }
        }
        else
        {
            if (s[iter] == '0')
                ans--;
        }
        cout << ans;
    }

    return 0;
}