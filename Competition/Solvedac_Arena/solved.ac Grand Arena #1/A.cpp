// problem: A번 - 양말 짝 맞추기
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[5];
    for (int i = 0; i < 5; i++)
        cin >> n[i];
    sort(n, n + 5);
    if (n[0] == n[1] && n[2] == n[3])
        cout << n[4];
    else if (n[0] == n[1] && n[3] == n[4])
        cout << n[2];
    else
        cout << n[0];

    return 0;
}