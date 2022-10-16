#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int q;
cin>>q;
int marks=0;
while(q--)
{  map<string,int>::iterator it;

map<string,int> m1;//marks
int i;
string x;
int y;
//takes input if and if else 
//else is for output
cin>>i;
if(i==1)
{cin>>x>>y;
m1[x]={m1[x]+y};
auto it=m1.find(x);
cout<<(*it).second<<"  first ki wajah se"<<(*it).first<<endl;
}
else if(i==2)
{cin>>x;

m1[x]={0};
 auto it=m1.find(x);
}

else
{  cin>>x;
  auto  it=m1.find(x);
  for(string value : m1.)
  {
      cout<<x<<endl;
  }
    
}


}
return 0;
}