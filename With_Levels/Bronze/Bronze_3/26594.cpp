// problem: ZOAC 5
// id: 26594
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
    int cnt = 1;
    int bef = s[0];
    for (int i = 1; i < iter; i++)
    {
        if (s[i] == bef)
            cnt++;
        else
            break;
    }
    cout << cnt;

    return 0;
}