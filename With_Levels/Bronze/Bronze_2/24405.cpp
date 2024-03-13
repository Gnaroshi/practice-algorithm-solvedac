// problem: Eye of Sauron
// id: 24405
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0;
    bool chk = true;
    string s;
    cin >> s;
    for (auto c : s)
    {
        if (c != '|')
        {
            chk = false;
            continue;
        }
        if (chk)
            a++;
        else
            a--;
    }
    cout << (a ? "fix" : "correct");

    return 0;
}