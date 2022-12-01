#include<iostream>
#include<cmath>
using namespace std;
class triangle{
    float a,b,c;
    public:
    triangle()
    {
    a=0;b=0;c=0;
    }
    triangle(int e)
    {
        a=e;
    }
    triangle(int e, int f)
    {
        a=e;
        b=f;
    }
    triangle(int e, int f, int g)
    {
        a=e;
        b=f;
        c=g;
        
    }
    float equi()
    {
        return (1.732*a*a/4) ;
    }
    float isos()
    {
        
        return (a*b/2);
    }
    float  scal()
    {
       float s = (a+b+c)/2;
       //cout<<a<<"  "<<b<<"  "<<c<<"  ";
       //cout<<"s is "<<s<<"  "; ye comment hai check kar raha tha
       return  sqrt(s*(s-a)(s-b)(s-c));
    }
};
  
    
        int main()
        {
            triangle t1(5);
            triangle t2(5,6);
            triangle t3(2.0,3.0,2.0);
    cout<<"Area of equi = "<<t1.equi()<<"\nand area of isos = "<<t2.isos()<<"\nand of scal = "<<t3.scal();
            return 0;
        }