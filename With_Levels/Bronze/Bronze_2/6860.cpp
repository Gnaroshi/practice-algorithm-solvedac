// problem: Maternity
// id: 6860
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, s;
    cin >> a >> b;
    int chk[5] = {0};
    for (int i = 0; i < 10; i++)
    {
        bool lc = false, uc = false;
        if (a[i] == b[i])
        {
            if (isupper(a[i]))
                uc = true;
            else
                lc = true;
        }
        else
            uc = true;
        i++;
        if (a[i] == b[i])
        {
            if (isupper(a[i]))
                uc = true;
            else
                lc = true;
        }
        else
            uc = true;
        if (lc && uc)
            chk[i / 2] = 2;
        else if (lc)
            chk[i / 2] = 1;
    }
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> s;
        bool ans = true;
        for (int i = 0; i < 5; i++)
        {
            if (chk[i] == 2)
                continue;
            if ((isupper(s[i]) && chk[i]) || (islower(s[i]) && chk[i] == 0))
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "Possible baby.\n";
        else
            cout << "Not their baby!\n";
    }

    return 0;
}