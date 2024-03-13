// problem: 현대모비스와 함께하는 부품 관리
// id: 24724
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    int n, a, b;
    for (int i = 1; i <= tc; i++)
    {
        cin >> n >> a >> b;
        for (int j = 0; j < n; j++)
            cin >> a >> b;
    }
    for (int i = 1; i <= tc; i++)
    {
        cout << "Material Management " << i << '\n';
        cout << "Classification ---- End!\n";
    }

    return 0;
}