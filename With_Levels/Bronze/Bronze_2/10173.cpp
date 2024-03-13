// problem: 니모를 찾아서
// id: 10173
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        getline(cin, s);
        if (s == "EOI")
            break;
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (isalpha(s[i]))
                s[i] = tolower(s[i]);
        }
        if (s.find("nemo") == string::npos)
            cout << "Missing\n";
        else
            cout << "Found\n";
    }

    return 0;
}