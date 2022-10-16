#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class complexa
{
    private:
    int a,b;
    public:
     ~complexa()  //destructor
     {cout<<"destructor";}
};
void fun();
int main()
{
cout<<"hi ";          //hi destructor proves that destructor runned before object destruction
fun();

return 0;
}
void fun()
{
    complexa obj;
}