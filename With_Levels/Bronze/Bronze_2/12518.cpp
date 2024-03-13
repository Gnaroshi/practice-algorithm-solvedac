// problem: Centauri Prime (Small2)
// id: 12518
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string vw = "aeiouAEIOU";
    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        string s;
        cin >> s;

        cout << "Case #" << tcc << ": " << s << " is ruled by ";

        char bs = s.back();
        if (bs == 'y' || bs == 'Y')
            cout << "nobody.\n";
        else if (vw.find(bs) == string::npos)
            cout << "a king.\n";
        else
            cout << "a queen.\n";
    }

    return 0;
}
