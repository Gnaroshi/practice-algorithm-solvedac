// problem: 고무오리 디버깅
// id: 20001
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    string s, a;
    getline(cin, a);
    while (getline(cin, s))
    {
        if (s == "고무오리 디버깅 끝")
            break;
        if (s == "문제")
            cnt++;
        else
        {
            if (cnt == 0)
                cnt += 2;
            else
                cnt--;
        }
    }
    if (cnt == 0)
        cout << "고무오리야 사랑해";
    else
        cout << "힝구";

    return 0;
}