#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,3,2,8};
    int value=5;
    int count=0;
    for(int i=0;i<5;i++)
    {
    for(int j=i+1;j<5;j++)
    {
    if(arr[i]+arr[j]==value)
    {
       count++;
       cout << arr[i]<<endl  << arr[j]  ;

    }
    }
    }
    cout<<" pair are: "<<count;
    return 0;
}