// problem: driip
// id: 23627
// time taken:
#include <bits/stdc++.h>
using namespace std;

string d = "driip";
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    if (s.length() >= d.length())
    {
        if (s.substr(s.length() - d.length(), d.length()) == d)
        {
            cout << "cute";
            return 0;
        }
    }
    cout << "not cute";

    return 0;
}