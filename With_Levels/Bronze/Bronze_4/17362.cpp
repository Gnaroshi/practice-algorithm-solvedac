#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;

    bool isR = false;
    long long cnt = 0;
    int temp = n % 8 + 8;
    cnt = 0;
    for (long long i = 0; i < temp; i++)
    {
        if (cnt == 5)
            isR = true;
        else if (cnt == 1)
            isR = false;
        if (!isR)
            cnt++;
        else
            cnt--;
    }
    cout << cnt << '\n';
    return 0;
}