#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 7;
    int sum = 0;
    int temp;
    int min = 100000;
    while(n--)
    {
        cin>>temp;
        if (temp % 2 != 0) 
        {
            sum+=temp;
            if (min > temp) min = temp;
        }
        
    }
    if (sum == 0) cout<<-1;
    else cout<<sum<<"\n"<<min;
    
    return 0;
}