#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> v1(3, 5); // {5, 5, 5}
    cout<<v1.size()<<"\n"; // 3
    v1.push_back(7); // {5, 5, 5, 7}

    vector<int> v2(2); // {0, 0}
    v2.insert(v2.begin() + 1, 3); // {0, 3, 0}

    vector<int> v3 = {1, 2, 3, 4}; // {1, 2, 3, 4}
    v3.erase(v3.begin() + 2); // {1, 2, 4}

    vector<int> v4; // { }
    v4 = v3; // {1, 2, 4}
    cout<<v4[0]<<v4[1]<<v4[2]<<'\n'; // 124
    v4.pop_back(); // {1, 2}
    v4.clear(); // { }


    vector<int> v5 = {1, 2, 3, 4, 5, 6};

    // 1. range-based for loop (since C++11)
    //before
    for (int e : v5) cout<<e<<'\n';
    for (int& e : v5) 
    {
        e++;
        cout<<e<<'\n';
    }
    //after
    for (int e : v5) cout<<e<<'\n';

    // 2. not bad
    for (int i = 0; i < v5.size(); i++)
    {
        cout<<v5[i]<<' ';
    }

    // // 3. wrong
    // // since vector size method returns unsigned int, therefore if we -1 to 0, it will be not -1, 4294967295.
    // for (int i = 0; i <= v5.size() - 1; i++)
    // {
    //     cout<<v1[i]<<' ';
    // }


    return 0;
}