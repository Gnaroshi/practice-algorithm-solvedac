// problem: Fractification
// id: 19751
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    long double mn = 4000000001, t;
    long double ns[4];
    for (int i = 0; i < 4; i++)
        cin >> ns[i];
    int ans[4] = {1, 2, 3, 4};
    int vst[4] = {0};

    for (int i = 0; i < 4; i++)
    {
        vst[i] = 1;
        for (int j = 0; j < 4; j++)
        {
            if (vst[j] == 0)
            {
                vst[j] = 1;
                for (int ii = 0; ii < 4; ii++)
                {
                    if (vst[ii] == 0)
                    {
                        vst[ii] = 1;
                        for (int jj = 0; jj < 4; jj++)
                        {
                            if (vst[jj] == 0)
                            {
                                t = ns[i] / ns[j] + ns[ii] / ns[jj];
                                if (mn > t)
                                {
                                    mn = t;
                                    ans[0] = i;
                                    ans[1] = j;
                                    ans[2] = ii;
                                    ans[3] = jj;
                                }
                            }
                        }
                        vst[ii] = 0;
                    }
                }
                vst[j] = 0;
            }
        }
        vst[i] = 0;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", int(ns[ans[i]]));
    }

    return 0;
}
