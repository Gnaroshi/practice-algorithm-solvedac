// problem: Who Has Seen The Wind
// id: 6779
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, m;
    cin >> h >> m;
    int t = 1;
    while (true)
    {
        if (-6 * t * t * t * t + h * t * t * t + 2 * t * t + t <= 0 || t > m)
            break;
        t++;
    }
    if (t > m)
        cout << "The balloon does not touch ground in the given time.";
    else
        cout << "The balloon first touches ground at hour: " << t;

    return 0;
}