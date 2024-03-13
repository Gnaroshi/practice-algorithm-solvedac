// problem: 나무 조각
// id: 2947
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n[5];

bool chk()
{
    for (int i = 0; i < 5; i++)
    {
        if (n[i] != i + 1)
            return false;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 5; i++)
        cin >> n[i];

    int cur = 0;
    while (true)
    {
        if (n[cur] > n[cur + 1])
        {
            swap(n[cur], n[cur + 1]);
            for (int i = 0; i < 5; i++)
                cout << n[i] << (i != 4 ? ' ' : '\n');
            if (chk())
                break;
        }
        cur++;
        cur %= 4;
    }

    return 0;
}