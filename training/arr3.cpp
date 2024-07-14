#include<iostream>
using namespace std;
int main()
{
    int user_input;
    int arr[4]={10,20,30,40};
    int flag=0;
    int counter=0;
   cout<<"enter the number you want to search: "<<endl;
   cin>>user_input;
   for(auto x:arr)
   if(user_input==x)
   {
    flag=1;
    break;
   }
   counter++;
   if(flag==1)
   {
    cout<<"found at: "<<counter;
   }
   else
   {
      cout<<"not found ";
   }

}