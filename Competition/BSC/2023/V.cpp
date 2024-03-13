// problem: V번 - 브실이의 띠부띠부씰 컬렉션 🍪
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int al[26] = {0};
    string s, bs = "ACDFGHJKMPQTUWXY";
    cin >> s;
    for (auto i : s)
        al[i - 'A']++;
    for (auto i : bs)
        al[i - 'A'] = 0x3f3f3f3f;
    al['E' - 'A'] /= 2;
    al['R' - 'A'] /= 2;
    cout << *min_element(al, al + 26);

    return 0;
}