#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class complexa
{   private:
int a,b;                //constructor overloading me more than one constructor ki presence hoti hai.
    public:
    complexa(int x,int y)
    {
        cout<<"hello constructor";
        a=x;b=y;
    }
    complexa(int x)      //parameterised constructor
    {
        a=x;
    }
    complexa()             //default constructor
    {}

};
int main()
{
complexa c1(3,4),c2(5);
complexa c4 = 3;       //we can use this to pass one  argument 
return 0;
} 