// problem: 단어 사다리
// id: 9229
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, b;
    while (true)
    {
        cin >> b;
        if (b == "#")
            break;
        bool chk = true;
        int cnt, iter = b.length();

        while (true)
        {
            cin >> s;
            if (s == "#")
            {
                cout << (chk ? "Correct\n" : "Incorrect\n");
                break;
            }
            if (chk)
            {
                if (iter != s.length())
                    chk = false;
                else
                {
                    cnt = 0;
                    for (int i = 0; i < iter; i++)
                        cnt += (s[i] != b[i]);
                    if (cnt != 1)
                        chk = false;
                }
                b = s;
            }
        }
    }

    return 0;
}