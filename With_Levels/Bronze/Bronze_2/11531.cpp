// problem: ACM 대회 채점
// id: 11531
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cp = 0, pn = 0;
    int pcnt[26] = {0};
    char c;
    string s;
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        cin >> c >> s;
        if (s[0] == 'r')
        {
            cp++;
            pn += 20 * pcnt[c - 'A'];
            pn += n;
        }
        else
            pcnt[c - 'A']++;
    }
    cout << cp << ' ' << pn;

    return 0;
}