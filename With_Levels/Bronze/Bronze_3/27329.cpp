// problem: 繰り返し文字列 (Repeating String)
// id: 27329
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
    if (iter % 2)
        iter++;
    iter /= 2;
    bool chk = true;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] != s[i + iter])
        {
            chk = false;
            break;
        }
    }
    if (chk)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}