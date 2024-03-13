// problem: Z번 - 2033년 밈 투표
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
string rs[7] = {
    "Never gonna give you up",
    "Never gonna let you down",
    "Never gonna run around and desert you",
    "Never gonna make you cry",
    "Never gonna say goodbye",
    "Never gonna tell a lie and hurt you",
    "Never gonna stop"};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    bool chk = true;
    cin >> n;
    cin.ignore();
    string s;
    while (n--)
    {
        getline(cin, s);
        int iter = s.length();
        if (chk)
        {
            bool temp = false;
            for (int i = 0; i < 7; i++)
            {
                if (s == rs[i])
                {
                    temp = true;
                    break;
                }
            }
            if (!temp)
            {
                chk = false;
            }
        }
    }
    cout << (!chk ? "Yes" : "No");

    return 0;
}