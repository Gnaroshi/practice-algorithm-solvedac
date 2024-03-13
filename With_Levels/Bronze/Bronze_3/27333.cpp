// problem: JOI エディタ (JOI Editor)
// id: 27333
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
    int iter = s.length();
    char bef = 'a';
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == bef)
        {
            s[i] = s[i] - 'a' + 'A';
            s[i - 1] = s[i - 1] - 'a' + 'A';
            bef = 'a';
        }
        else
            bef = s[i];
    }
    for (int i = 0; i < iter; i++)
        cout << s[i];

    return 0;
}