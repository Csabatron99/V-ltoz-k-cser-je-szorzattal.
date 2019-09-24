#include <iostream>
using namespace std;

int main() {
  int a=0,b=0;
  cout<<"Please enter 2 variable: \n";
  cin>>a>>b;
  cout<<"\n1. Variable= "<<a<<"\n2. Variable= "<<b;
  a=a^b;
  b=a^b;
  a=a^b;
  cout<<"\nAfter the swipe: ";
  cout<<"\n1. Variable= "<<a<<"\n2. Variable= "<<b<<'\n';

  return 0;
}
