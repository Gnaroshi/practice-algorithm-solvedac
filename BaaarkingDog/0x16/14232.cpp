#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;
    int cnt = 0;

    int iter = num;
    vector<int> v;
    for (int i = 2; i * i < iter; i++)
    {
        while (num % i == 0)
        {
            v.push_back(i);
            cnt++;
            num /= i;
        }
    }

    if (num != 1)
    {
        v.push_back(num);
        cnt++;
    }

    cout << cnt << '\n';
    for (auto temp : v)
        cout << temp << ' ';

    return 0;
}