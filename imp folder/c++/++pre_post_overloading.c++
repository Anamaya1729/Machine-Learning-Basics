#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class integer
{
int x;
public:
void setdata(int a)
{
    x=a;
}
void showdata()
{
    cout<<x<<"\n";
}
integer operator++()      //pre-increment
{
    integer i;
    i.x=++x;
    return i;

}
integer operator++(int)
{                           //post increment
    integer i;
    i.x==x++;
    return i;
}

};
int main()
{
integer i1,i2,i3;
i1.setdata(5);
//i2=++i1;//i2=i1.operator++();
//i2.showdata();

i1.showdata();
i3=i1++;
i1.showdata();
i3.showdata();



return 0;
}