// problem: 양수 개수 세기
// id: 14909
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cnt = 0;
    while (true)
    {
        cin >> t;
        if (cin.eof())
            break;
        if (t > 0)
            cnt++;
    }
    cout << cnt;

    return 0;
}