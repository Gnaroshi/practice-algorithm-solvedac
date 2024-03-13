// problem: 4344
// id: 평균은 넘겠지
// time taken: 5m 16s
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        double s = 0;
        double avg = 1;
        double *arr = (double *)malloc(sizeof(double) * n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s += arr[i];
        }
        avg = s / n;
        double cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > avg)
                cnt++;
        }
        s = cnt / n * 100;
        printf("%.3lf%%\n", s);
    }
    return 0;
}