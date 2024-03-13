// problem: C번 - 특별한 학교 이름 암호화
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string temp;
    string fn[4] = {
        "northlondo",
        "branksomeh",
        "koreainter",
        "stjohnsbur"};
    string sn[4] = {
        "NLCS",
        "BHA",
        "KIS",
        "SJA"};
    cin >> temp;
    int iter = temp.length();
    int cnt = 0;
    while (true)
    {
        for (int i = 0; i < 4; i++)
        {
            if (temp == fn[i])
            {
                cout << sn[i];
                return 0;
            }
        }
        for (int i = 0; i < iter; i++)
        {
            if (temp[i] == 'z')
                temp[i] -= 25;
            else
                temp[i]++;
        }
    }

    return 0;
}