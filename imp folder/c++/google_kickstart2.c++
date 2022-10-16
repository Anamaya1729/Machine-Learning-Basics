#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
vector<string> v;
vector<int> siz;
for(int i=0;i<t;++i)
{
    string s;
    cin>>s;
    v.push_back(s);
    int size = v[i].size();
    siz.push_back(size);
}
for(int i=0;i<t;++i)
    if(v[i].at(siz[i]-1)=='A'||v[i].at(siz[i]-1)=='E'||v[i].at(siz[i]-1)=='I'||v[i].at(siz[i]-1)=='O'||v[i].at(siz[i]-1)=='U'||v[i].at(size-1)=='a'||v[i].at(size-1)=='e'||v[i].at(size-1)=='i'||v[i].at(size-1)=='o'||v[i].at(size-1)=='u')
    {
        cout<<"Case #"<<i+1<<":  "<<v[i]<<" is ruled by Bob."<<endl;
    }
     else if(v[i].at(size-1)=='y')
   {
         cout<<"Case #"<<i+1<<":  "<<v[i]<<" is ruled by nobody."<<endl;
     }
     else
    {
        cout<<"Case #"<<i+1<<":  "<<v[i]<<" is ruled by Alice."<<endl;
    }


return 0;
}