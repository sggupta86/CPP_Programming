// c++ multi class program. two class in two diffrent file of cpp, connect with each other.
//accessing public element of another class

#include<iostream>
#include  "My_class.cpp"

using namespace std;

class De : public My_class
{
    public:
     int a=5;
     void add()
     {
      z=z+a;            // here call the z which is define in other class file and call by 
                        //include statement and function
      cout<<z;
     }
    
   
     void add1()
     {
      y=y+a;            /* here call the y which is define in other class file and call by 
                        include statement and function*/
      cout<<y;
     }
   
    /*void add2()
     {
      x=x+a;            // x is private due to that not accesible, genrtae error
      cout<<y;
     }*/
    
};


int main()
{
De d;
d.add();
d.add1();
//d.add2();
return 0;    
}