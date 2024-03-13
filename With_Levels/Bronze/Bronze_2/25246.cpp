// problem: Brexiting and Brentering
// id: 25246
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length(), loc;
    for (int i = iter - 1; i >= 0; i--)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            loc = i;
            break;
        }
    }
    cout << s.substr(0, loc + 1) << "ntry";

    return 0;
}