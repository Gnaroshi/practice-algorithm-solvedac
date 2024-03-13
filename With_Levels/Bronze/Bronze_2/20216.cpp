// problem: Ducky Debugging
// id: 20216
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    string s;
    while (true)
    {
        getline(cin, s);
        if (s.length() == 0)
            continue;
        if (s == "I quacked the code!")
            break;
        if (s[s.length() - 1] == '.')
            cout << '\n'
                 << "*Nod*\n";
        else
            cout << '\n'
                 << "Quack!\n";
    }

    return 0;
}