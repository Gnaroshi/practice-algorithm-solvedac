#include <iostream>
using namespace std;

int main(void)
{
    int cnt; cin>>cnt;
    int *nums = (int*)malloc(sizeof(int)*cnt);
    int primes = 0;
    int subMultiples = 0;
    for (int i = 0; i < cnt; i++)
    {
        cin>>nums[i];
        subMultiples = 0;

        for (int j = 1; j < nums[i]; j++)
        {
            if(nums[i] % j == 0)
            {
                subMultiples++;
            }
        }
        if(subMultiples == 1)
        {
            primes++;
        }
    }
    cout<<primes;
    return 0;
}