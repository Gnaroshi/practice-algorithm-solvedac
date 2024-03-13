// problem: Inverse Common Superstring
// id: 21044
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string t = "a";
    while (true)
    {
        if (s.find(t) != string::npos)
        {
            t += 'a';
        }
        else
        {
            cout << t;
            return 0;
        }
    }

    return 0;
}