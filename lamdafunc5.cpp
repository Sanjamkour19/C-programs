#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>numbers={1,2,3,4,5};
    auto count=[&]()
    {
        for(auto i:numbers)
        {
            cout<<i<<" ";
        }
    };
    count();
    return 0;
}