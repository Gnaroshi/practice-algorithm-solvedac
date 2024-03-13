#include <iostream>
using namespace std;

int main(void)
{
    int tcn; cin>>tcn;
    int *nums = (int*)malloc(sizeof(int)*tcn);
    int min = 1000001;
    int max = -1000001;

    for (int i = 0; i < tcn; i++)
    {
        cin>>nums[i];
        if (min >= nums[i])
        {
            min = nums[i];
        }
        if (max <= nums[i])
        {
            max = nums[i];
        }
    }
    cout<<min<<" "<<max;
    free(nums);

    return 0;
}