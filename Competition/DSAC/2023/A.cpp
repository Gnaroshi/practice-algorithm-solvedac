// problem: A번 - DKSH 찾기
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int iter = s.length() - 3, cnt = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s.substr(i, 4) == "DKSH")
            cnt++;
    }
    cout << cnt;

    return 0;
}