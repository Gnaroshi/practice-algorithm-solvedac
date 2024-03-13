#include <iostream>
using namespace std;

int main(void)
{
    int tc; cin>>tc;
    int k, n;
    for(int i = 0; i < tc; i++)
    {
        cin>>k>>n;
        int tempk = k;
        int tempn = n;
        int people = 0;
        int *downfloor = (int*)malloc(sizeof(int)*n);
        for (int d = 0; d < n; d++)
        {
            downfloor[d] = d + 1;
        }
        int *currentfloor = (int*)malloc(sizeof(int)*n);
        for (int d = 0; d < n; d++)
        {
            currentfloor[d] = downfloor[d];
        }

        for (int j = 0; j < k; j++)
        {

            for (int m = 1; m < n; m++)
            {
                for (int mm = 0; mm < m; mm++)
                {
                    currentfloor[m] += downfloor[mm];
                }
            }
            for (int m = 0; m < n; m++)
            {
                downfloor[m] = currentfloor[m];
            }
            people = currentfloor[n - 1];

        }
        free(downfloor);
        free(currentfloor);
        cout<<people<<endl;
    }
    return 0;
}