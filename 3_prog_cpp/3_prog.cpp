#include<iostream>
using namespace std;
class Add
{

public:
int a,b,c;
void input();
void add();
void output();

};
void Add::input()
{

    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
}

void Add::add()
{
    c=a+b;

}

void Add::output()
{
cout<<"result is:"<<c;
}

int main()
{

Add a;
a.input();
a.add();
a.output();
}