// problem: George Boole
// id: 13234
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    if (s == "true AND true")
        cout << "true";
    else if (s == "true AND false")
        cout << "false";
    else if (s == "false AND true")
        cout << "false";
    else if (s == "false AND false")
        cout << "false";
    else if (s == "true OR true")
        cout << "true";
    else if (s == "false OR false")
        cout << "false";
    else if (s == "false OR true")
        cout << "true";
    else if (s == "true OR false")
        cout << "true";

    return 0;
}