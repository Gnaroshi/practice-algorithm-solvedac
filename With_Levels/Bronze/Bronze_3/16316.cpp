// problem: Baby Bites
// id: 16316
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, t, cnt = 1;
    cin >> tc;
    bool isOk = true;
    string s;
    for (int i = 0; i < tc; i++)
    {
        cin >> s;
        if (s[0] != 'm')
        {
            if (stoi(s) != cnt)
                isOk = false;
        }
        cnt++;
    }
    if (isOk)
        cout << "makes sense";
    else
        cout << "something is fishy";

    return 0;
}