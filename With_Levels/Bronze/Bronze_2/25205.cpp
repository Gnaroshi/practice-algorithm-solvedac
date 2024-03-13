// problem: 경로당펑크 2077
// id: 25205
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;
    char c = s[n - 1];
    if (c == 'q' ||
        c == 'w' ||
        c == 'e' ||
        c == 'r' ||
        c == 't' ||
        c == 'a' ||
        c == 's' ||
        c == 'd' ||
        c == 'f' ||
        c == 'g' ||
        c == 'z' ||
        c == 'x' ||
        c == 'c' ||
        c == 'v')
        cout << 1;
    else
        cout << 0;

    return 0;
}