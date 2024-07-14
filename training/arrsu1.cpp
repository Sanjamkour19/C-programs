#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int sum=0;
    //to find sum of array elements
    for(auto x:arr)
    {
        sum+=x;
    }
    
    cout<<"sum is: "<< sum;
    
    return 0;

    
}