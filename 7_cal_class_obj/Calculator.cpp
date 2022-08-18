class Calculator
{

    public:
        int a,b,c;
        int add()
        {
            c=a+b;
            return c;
        }

         
        int sub()
        {
            c=a-b;
            return c;
        }
        
        int mul()
        {
            c=a*b;
            return c;
        }
        
        float div()
        {
            float e = a/b;
            return e;
        }

};