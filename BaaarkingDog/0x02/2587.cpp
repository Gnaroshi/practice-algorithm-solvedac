#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 5;
    int sum = 0;
    int temp;
    int *nums = new int(n);

    for (int i = 0; i < n; i++) 
    {
        cin>>nums[i];
        sum+=nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i] < nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    cout<<sum/n<<"\n"<<nums[2];
    delete(nums);
    
    return 0;
}