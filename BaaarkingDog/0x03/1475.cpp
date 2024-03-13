#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int nums[10] = {0};

    while(true)
    {
        if ((n % 10) == 6 || (n % 10) == 9)
        {
            nums[6]++;
        } 
        else nums[n % 10]++;
        n = n / 10;
        if (n == 0) break;
    }
    if (nums[6] % 2 == 1) nums[6] = nums[6] / 2 + 1;
    else nums[6] = nums[6] / 2;

    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
        }
    }

    cout<<max<<"\n";
    return 0;
}