
#include <iostream>
using namespace std;

void QuickSort(int *nums, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = start;
    int i = start + 1;
    int j = end;
    int temp;

    while(i <= j)
    {
        while(nums[i] <= nums[pivot])
        {
            i ++;
        }
        while(j > start && nums[j] >= nums[pivot])
        {
            j--;
        }

        if(i > j)
        {
            temp = nums[j];
            nums[j] = nums[pivot];
            nums[pivot] = temp;
        }
        else
        {
            temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
        }
    }

    QuickSort(nums, start, j - 1);
    QuickSort(nums, j + 1, end);

}

int main(void)
{
    int num; cin>>num;
    int nums[50];
    int len = 7;
    for (int i = 0; i < num; i++)
    {
        cin>>nums[i];
    }
    QuickSort(nums, 0, num - 1);

    cout<<nums[0] * nums[num - 1];
    
    return 0;
}