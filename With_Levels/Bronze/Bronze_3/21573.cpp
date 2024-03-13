// problem: Кондиционер
// id: 21573
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tr, tc;
    string s;
    cin >> tr >> tc >> s;
    if (s == "freeze")
        cout << min(tr, tc);
    else if (s == "heat")
        cout << max(tr, tc);
    else if (s == "auto")
        cout << tc;
    else if (s == "fan")
        cout << tr;

    return 0;
}