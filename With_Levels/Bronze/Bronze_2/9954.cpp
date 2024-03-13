// problem: Cedric's Cypher
// id: 9954
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
        if (s == "#")
            break;
        int n = (s.back() - 'A'), iter = s.length() - 1;
        for (int i = 0; i < iter; i++)
        {
            if (isalpha(s[i]))
            {
                if (isupper(s[i]))
                    cout << char((s[i] - 'A' - n + 26) % 26 + 'A');
                else
                    cout << char((s[i] - 'a' - n + 26) % 26 + 'a');
            }
            else
                cout << s[i];
        }
        cout << '\n';
    }

    return 0;
}