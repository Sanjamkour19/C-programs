#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("Ajay");
    s.push("Sanjam");
    s.push("Rishika");
    s.push("Akanksha");
    cout<<"top elements: "<<s.top()<<endl;
}