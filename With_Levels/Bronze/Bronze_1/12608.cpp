// problem: T9 Spelling (Large)
// id: 12608
// time taken:
#include <bits/stdc++.h>
using namespace std;

int pd[27] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9, 0};
int pc[27] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4, 1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        string s;
        getline(cin, s);
        char bef, cur;
        if (s[0] == ' ')
            bef = 26;
        else
            bef = s[0] - 'a';
        int iter = s.length();
        for (int i = 0; i < pc[bef]; i++)
            cout << pd[bef];
        for (int i = 1; i < iter; i++)
        {
            if (isalpha(s[i]))
                cur = s[i] - 'a';
            else
                cur = 26;
            if (pd[bef] == pd[cur])
                cout << ' ';
            for (int j = 0; j < pc[cur]; j++)
                cout << pd[cur];
            bef = cur;
        }
        cout << '\n';
    }

    return 0;
}