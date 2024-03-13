// problem: Explicit Formula
// id: 3533
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[10];
    for (int i = 0; i < 10; i++)
        cin >> n[i];
    int t = 0;
    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
            t += (n[i] || n[j]);
    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
            for (int k = j + 1; k < 10; k++)
                t += (n[i] || n[j] || n[k]);
    cout << t % 2;

    return 0;
}