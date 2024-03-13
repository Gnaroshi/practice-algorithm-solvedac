// problem: Grading Exams
// id: 9296
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case " << tcc << ": ";
        int cnt = 0, iter;
        string a, b;
        cin >> iter >> a >> b;
        for (int i = 0; i < iter; i++)
        {
            if (a[i] != b[i])
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}