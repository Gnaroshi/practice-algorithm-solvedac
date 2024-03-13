// problem: Garbled Message
// id: 5362
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (getline(cin, s))
    {
        string::size_type n;
        n = s.find("iiing");
        while (n != string::npos)
        {
            s.replace(n, 5, "th");
            n = s.find("iiing");
        }
        cout << s << '\n';
    }

    return 0;
}