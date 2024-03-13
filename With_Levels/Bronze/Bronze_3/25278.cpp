// problem: Terraforming
// id: 25278
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ox = 0, oc = 0, te = -30;
    string s, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> d;
        if (s[0] == 't')
            te += d[1] - '0';
        else if (s[0] == 'o' && s[1] == 'x')
            ox += d[1] - '0';
        else
            oc += d[1] - '0';
    }
    if (oc < 9 || ox < 14 || te < 8)
        cout << "not ";
    cout << "liveable";

    return 0;
}
