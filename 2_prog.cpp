#include<iostream>
using namespace std;
class Add
{
int a,b,c;
public:
void input()
{
cout<<"enter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
}
void add()
{
cout<<"addition is:"<<a+b;
}
};

int main()
{
Add a;
a.input();
a.add();
}