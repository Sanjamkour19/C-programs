#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,50,40};
    int max=-32678;
    for(auto temp:arr)
    if(temp>max)
    {
        max=temp;
    }
    cout<<max;
 return 0;
}