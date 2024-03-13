// problem: Birthday Graph
// id: 14535
// time taken:
#include <bits/stdc++.h>
using namespace std;

void pr(int n)
{
    for (int i = 0; i < n; i++)
        cout << '*';
    cout << '\n';
    return;
}

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int tc = 1;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        int loc = 1;
        int cnt[13] = {0};
        int d, m, y;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &d, &m, &y);
            cnt[m]++;
        }
        cout << "Case #" << tc++ << ":\n";
        cout << "Jan:";
        pr(cnt[loc++]);
        cout << "Feb:";
        pr(cnt[loc++]);
        cout << "Mar:";
        pr(cnt[loc++]);
        cout << "Apr:";
        pr(cnt[loc++]);
        cout << "May:";
        pr(cnt[loc++]);
        cout << "Jun:";
        pr(cnt[loc++]);
        cout << "Jul:";
        pr(cnt[loc++]);
        cout << "Aug:";
        pr(cnt[loc++]);
        cout << "Sep:";
        pr(cnt[loc++]);
        cout << "Oct:";
        pr(cnt[loc++]);
        cout << "Nov:";
        pr(cnt[loc++]);
        cout << "Dec:";
        pr(cnt[loc++]);
    }

    return 0;
}