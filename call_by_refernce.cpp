#include<iostream>
using namespace std;
void swap(int &a,int&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=100,b=200;
    swap(a,b);
    cout<<"value of a is"<<a;
    cout<<"Value of b is"<<b;
    return 0;
}
