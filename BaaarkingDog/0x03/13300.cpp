#include <iostream>

using namespace std;

int years = 12;

int main(void)
{
    int n, k; cin>>n>>k;
    int *sex = (int*)malloc(sizeof(int)*n);
    int *year = (int*)malloc(sizeof(int) * years);
    for (int i = 0; i < years; i++) year[i] = 0;

    int tempSex, tempYear;
    for (int i = 0; i < n; i++) 
    {
        cin>>tempSex>>tempYear;
        tempSex == 1 ? year[tempYear - 1]++ : year[tempYear - 1 + 6]++;
    }

    int rooms = 0;
    for (int i = 0; i < years; i++)
    {
        if (year[i] == 0) continue;
        if (year[i] < k)
        {
            rooms++;
            continue;
        }
        year[i] % k != 0 ? rooms += ((year[i] / k) + 1) : rooms += (year[i] / k);
        
    }

    cout<<rooms<<"\n";


    return 0;
}