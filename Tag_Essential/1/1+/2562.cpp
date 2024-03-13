#include <iostream>
using namespace std;

int main(void)
{
    int num = 9;
    int *nums = (int*)malloc(sizeof(int) * num);
    int max = -1;
    int loc;
    for (int i = 0; i < num; i++)
    {
        cin>>nums[i];
        if(nums[i] > max)
        {
            max = nums[i];
            loc = i + 1;
        }
    }
    cout<<max<<endl;
    cout<<loc;

    return 0;
}