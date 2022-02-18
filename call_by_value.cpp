#include<iostream>
using namespace std;
void swap (int a,int b)
{
  int temp;
  a=temp;
  a=b;
  b=temp;
}
int main()
{
  int a =100,b=200;
  swap (a,b);
  cout<<"Value of a is /n"<<a;
  cout<<"Value of b is /n"<<b;
  return 0;
}
