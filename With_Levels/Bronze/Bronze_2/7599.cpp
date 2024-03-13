// problem: Library Codes
// id: 7599
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, b;
    int f, c, w;
    while (true)
    {
        cin >> s >> f;
        if (s == "#" && !f)
            break;
        cin >> c;
        cout << s << " Library\n";
        for (int i = 1; i <= c; i++)
        {
            cin >> w >> b;
            cout << "Book " << i << ' ';
            if (w >= (f * b.length() + 2))
                cout << "horizontal\n";
            else
                cout << "vertical\n";
        }
    }

    return 0;
}