// problem: Логины
// id: 29108
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if (s.length() > 2)
    {
        if (s.substr(0, 2) == "io")
            cout << "Correct";
        else
            cout << "Incorrect";
    }
    else
        cout << "Incorrect";
    return 0;
}