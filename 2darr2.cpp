#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{10,50,20},
                   {1,2,3},
                   {0,2,3}};
int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i+j==2)
            {
                sum+=arr[i][j];
            }
        }
    }
    cout<<"sum of first row is:"<<endl<<sum;
}
