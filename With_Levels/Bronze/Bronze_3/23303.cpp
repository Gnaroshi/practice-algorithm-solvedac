// problem: 이 문제는 D2 입니다.
// id: 23303
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int iter = s.length();
    int bef = s[0];
    for (int i = 1; i < iter; i++)
    {
        if (bef == 'D' || bef == 'd')
        {
            if (s[i] == '2')
            {
                cout << "D2";
                return 0;
            }
        }
        bef = s[i];
    }
    cout << "unrated";

    return 0;
}