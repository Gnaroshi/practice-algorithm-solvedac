// problem: Scaling Recipes
// id: 11640
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << fixed;
    cout.precision(1);
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Recipe # " << tcc << '\n';
        int r, mi;
        double p, d, w, wt, mig = 0;
        cin >> r >> p >> d;
        d /= p;
        vector<string> sv;

        double *pc = (double *)malloc(sizeof(double) * r);
        for (int i = 0; i < r; i++)
        {
            string s;
            cin >> s >> wt >> pc[i];
            sv.emplace_back(s);
            if (abs(pc[i] - 100) < 0.00001)
            {
                mi = i;
                w = wt;
            }
            pc[i] /= 100;
        }
        mig = w * d;
        for (int i = 0; i < r; i++)
        {
            if (i == mi)
                cout << sv[i] << ' ' << mig << '\n';
            else
                cout << sv[i] << ' ' << mig * pc[i] << '\n';
        }
        cout << "----------------------------------------\n";
    }

    return 0;
}