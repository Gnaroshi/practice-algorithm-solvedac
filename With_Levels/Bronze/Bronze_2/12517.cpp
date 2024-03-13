// problem: Centauri Prime (Small1)
// id: 12517
// time taken:
#include <bits/stdc++.h>
using namespace std;

string vw = "aeiou";
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        string s;
        cin >> s;
        cout << "Case #" << tcc << ": " << s << " is ruled by ";
        if (vw.find(s.back()) != string::npos)
            cout << "a queen.\n";
        else if (s.back() == 'y')
            cout << "nobody.\n";
        else
            cout << "a king.\n";
    }

    return 0;
}