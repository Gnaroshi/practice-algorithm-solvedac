// problem: Kamil
// id: 8436
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length(), cnt = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'T' || s[i] == 'D' || s[i] == 'L' || s[i] == 'F')
            cnt++;
    }
    long long i = 1;
    while (cnt--)
        i *= 2;
    cout << i;

    return 0;
}
