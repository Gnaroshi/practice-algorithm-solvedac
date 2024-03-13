// problem: Honor kipa00 Award
// id: 18169
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char t;
    cin >> t;
    if (t == 'A')
        cout << 8; // Adler32
    else if (t == 'B')
        cout << 7; // Binary Matrix
    else if (t == 'C')
        cout << 5;
    else if (t == 'D')
        cout << 2; // Dao Robot
    else if (t == 'E')
        cout << 4;
    else if (t == 'F')
        cout << 9;
    else if (t == 'G')
        cout << 12; // Game with Polynomials

    return 0;
}