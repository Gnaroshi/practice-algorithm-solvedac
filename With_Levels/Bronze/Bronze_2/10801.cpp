// problem: 카드게임
// id: 10801
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int RND = 10;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    int a[RND], b[RND];
    for (int i = 0; i < RND; i++)
        cin >> a[i];
    for (int i = 0; i < RND; i++)
        cin >> b[i];
    for (int i = 0; i < RND; i++)
    {
        if (a[i] > b[i])
            cnt++;
        else if (a[i] < b[i])
            cnt--;
    }
    if (cnt > 0)
        cout << 'A';
    else if (cnt < 0)
        cout << 'B';
    else
        cout << 'D';
    return 0;
}