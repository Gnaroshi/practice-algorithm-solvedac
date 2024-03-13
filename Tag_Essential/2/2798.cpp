#include <iostream>
using namespace std;

int main(void)
{
    int n, m; cin>>n>>m;
    int *nums = (int*)malloc(sizeof(int)*n);
    int max = -1;
    int tempSum = 0;

    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                tempSum = 0;
                count = 0;
                if ((tempSum + nums[i]) <= m)
                {
                    tempSum += nums[i];
                    count++;
                }
                if ((tempSum + nums[j]) <= m)
                {
                    tempSum += nums[j];
                    count++;
                }
                if ((tempSum + nums[k]) <= m)
                {
                    tempSum += nums[k];
                    count++;
                }
                if (tempSum > max && count == 3)
                {
                    max = tempSum;
                }
            }
            
        }
    }
    cout<<max<<endl;



    return 0;
}