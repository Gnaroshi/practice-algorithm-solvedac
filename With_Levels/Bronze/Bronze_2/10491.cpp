// problem: Quite a problem
// id: 10491
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
        int iter = s.length();
        for (int i = 0; i < iter; i++)
            if (isalpha(s[i]))
                s[i] = towlower(s[i]);
        cout << ((s.find("problem") == string::npos) ? "no\n" : "yes\n");
    }

    return 0;
}