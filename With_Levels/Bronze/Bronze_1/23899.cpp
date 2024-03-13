// problem: 알고리즘 수업 - 선택 정렬 5
// id: 23899
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll sa = 0, sb = 0, cm = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a)
    {
        cin >> i;
        sa += i;
    }
    for (auto &i : b)
    {
        cin >> i;
        sb += i;
    }
    bool chk = false, tchk;
    for (int i = n - 1; i >= 0; i--)
    {
        tchk = true;
        for (int j = 0; j < n; j++)
        {
            if (a[j] != b[j])
            {
                tchk = false;
                break;
            }
        }
        if (tchk)
        {
            cout << 1;
            return 0;
        }
        cm = max_element(a.begin(), a.begin() + i + 1) - a.begin();

        if (cm != i)
            swap(a[i], a[cm]);
    }

    tchk = true;
    for (int j = 0; j < n; j++)
    {
        if (a[j] != b[j])
        {
            tchk = false;
            break;
        }
    }
    cout << tchk;

    return 0;
}