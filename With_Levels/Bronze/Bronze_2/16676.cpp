// problem: 근우의 다이어리 꾸미기
// id: 16676
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
    if (iter == 1)
    {
        cout << 1;
        return 0;
    }
    // 5000 4444 3333 200 111
    if (s[0] == '1')
    {
        bool chk = true;
        for (int i = 1; i < iter; i++)
        {
            if (s[i] > '1')
                break;
            else if (s[i] == '0')
            {
                chk = false;
                break;
            }
        }
        cout << iter - 1 + chk;
    }
    else
        cout << iter;

    return 0;
}