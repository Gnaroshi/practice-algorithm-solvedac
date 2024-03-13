// problem: Rotating letters
// id: 6750
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'I' || s[i] == 'O' || s[i] == 'S' || s[i] == 'H' || s[i] == 'Z' || s[i] == 'X' || s[i] == 'N')
            continue;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}