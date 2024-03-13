// problem: 연길이의 이상형
// id: 20540
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if (s[0] == 'E')
        cout << 'I';
    else
        cout << 'E';
    if (s[1] == 'S')
        cout << 'N';
    else
        cout << 'S';
    if (s[2] == 'T')
        cout << 'F';
    else
        cout << 'T';
    if (s[3] == 'J')
        cout << 'P';
    else
        cout << 'J';

    return 0;
}