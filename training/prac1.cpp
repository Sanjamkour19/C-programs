//1) A student will not be allowed to sit in exam if his/her attendence is less
//than 75%
//Take following input from user:
 //Number of classes held
 //Number of classes attended.
//And print:
 //percentage of class attended
 // Is student is allowed to sit in exam or not.
 #include<iostream>
 using namespace std;
 int main()
 {
  int held_classes,attended_classes;
  float percentage;
  cout<<"Enter the number of held classes"<<endl;
  cin>>held_classes;
  cout<<"Enter the number of classes attended"<<endl;
  cin>>attended_classes;
  percentage=(attended_classes%held_classes);
  cout<<"percentage is: "<<percentage<<" % ";
  if(percentage>=75){
    cout<<"Student is allowed";
  }
  else{
    cout<<"Student is not allowed";
  }
  return 0;
 }