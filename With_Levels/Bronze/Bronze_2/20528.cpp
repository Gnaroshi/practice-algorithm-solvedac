// problem: 끝말잇기
// id: 20528
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    bool chk = true;
    string s;
    cin >> s;
    char c = s[0];
    for (int i = 1; i < n; i++)
    {
        cin >> s;
        if (chk)
        {
            if (s[0] != c)
                chk = false;
        }
    }
    cout << chk;

    return 0;
}