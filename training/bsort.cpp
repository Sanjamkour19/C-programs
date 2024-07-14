#include<iostream>
using namespace std;
void bsort()
{
    int arr[5]={7,11,3,4,1};
    
    int temp;
    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
    { 
        if(arr[j]>arr[j+1])
        {
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }

    }

for(int k=0;k<5;k++)
{
    cout<<arr[k]<<endl;
}
}
int main()
{
 bsort();
 return 0;
}