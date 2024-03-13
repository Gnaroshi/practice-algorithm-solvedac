// problem: 2루수 이름이 뭐야
// id: 17350
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    bool chk = false;
    while (tc--)
    {
        string s;
        cin >> s;
        int iter = s.length();
        if (iter == 3)
        {
            if (s[0] == 'a' && s[1] == 'n' && s[2] == 'j')
            {
                chk = true;
                break;
            }
        }
    }
    if (chk)
        cout << "뭐야;";
    else
        cout << "뭐야?";

    return 0;
}