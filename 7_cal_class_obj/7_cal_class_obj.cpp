#include<iostream>
#include "Calculator.cpp"
using namespace std;

class Cal : public Calculator
{
    public:
    void input()
    {
        cout<<"enter the value of a:";
        cin>>a;
        cout<<"enter the value of b:";
        cin>>b;
    }

};

int main()
{
    Cal c1;
    int ch;
    int r;
    float r1;
    cout<<"Enter your choise:1/2/3/4:";
    cin>>ch;
    c1.input();
    switch(ch)
    {
        case 1: r = c1.add(); 
                cout<<"Addition is:"<<r;
                break;
        case 2: r = c1.sub();
                cout<<"substraction is:"<<r;
                break;
        case 3: r = c1.mul();
                cout<<"multiplication is:"<<r;
                break;

        case 4: r1 = c1.div();
                cout<<"division is:"<<r1;
                break;
    }
return 0;

}