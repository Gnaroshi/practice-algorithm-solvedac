// problem: 팰린드롬인지 확인하기
// id: 10988
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool pal(string t)
{
    int len = t.length() - 1;
    int mid = len / 2;
    for (int i = 0; i <= mid; i++)
    {
        if (t[i] != t[len - i])
            return 0;
    }
    return 1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string temp;
    cin >> temp;
    cout << pal(temp);

    return 0;
}