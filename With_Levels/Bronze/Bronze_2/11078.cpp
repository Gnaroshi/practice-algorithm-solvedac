// problem: Banking
// id: 11078
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b, ans = "";
    cin >> a >> b;
    int ia = a.length(), ib = b.length(), loc = 0;
    for (int i = 0; i < ib; i++)
    {
        if (islower(b[i]))
        {
            ans.append(a.substr(loc, b[i] - 'a' + 1));
            loc += b[i] - 'a' + 1;
        }
        else
        {
            loc += b[i] - 'A' + 1;
        }
        if (loc > ia)
        {
            cout << "non sequitur";
            return 0;
        }
    }
    if (loc != ia)
    {
        cout << "non sequitur";
        return 0;
    }
    int sm = 0;
    ia = ans.length();
    for (int i = 0; i < ia; i++)
        sm += ans[i] - '0';
    cout << sm;

    return 0;
}