// problem: 가장 큰 금민수
// id: 1526
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = n;; i--)
    {
        bool chk = false;
        string s = to_string(i);
        for (auto c : s)
        {
            if (c != '7' && c != '4')
            {
                chk = true;
                break;
            }
        }
        if (!chk)
        {
            cout << i;
            break;
        }
    }

    return 0;
}