// problem: Dickensian Dictionary
// id: 23367
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string l = "qwertasdfgzxcvb";
    string r = "yuiophjklnm";
    string s;
    cin >> s;
    int iter = s.length();
    bool bef, cur, chk = true;
    if (l.find(s[0]) != string::npos)
        bef = true;
    else
        bef = false;
    for (int i = 1; i < iter; i++)
    {
        if (l.find(s[i]) != string::npos)
            cur = true;
        else
            cur = false;
        if (bef == cur)
        {
            chk = false;
            break;
        }
        bef = cur;
    }
    if (chk)
        cout << "yes";
    else
        cout << "no";

    return 0;
}