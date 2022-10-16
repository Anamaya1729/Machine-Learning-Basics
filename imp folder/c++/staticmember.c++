#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class account
{
private:
    int balance;
   static float roi;
public:
    void set_balance(int b)
    {
        balance=b;
    }
     void set_roi(float r)
    {
        roi = r;
    }
      int get_balance()
    {
        return balance;
    }
    static float get_roi()
    {
        return roi;
    }
};
int main()
{account a1;
a1.set_balance(1000);
a1.set_roi(6.500);
cout<<a1.get_balance()<<"\n";
cout<<a1.get_roi();

return 0;
}