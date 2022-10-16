#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int d=0;
int main()
{
int t;cin>>t;
while(t--)
{
    int n;cin>>n;
    vector <int> v;
    for(int i=0;i<n;++i)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    vector<int> c=v;
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();++i)
    {
        cout<<c[i]<<" ";
    }
    while(c==v)
    { 
    int i=0;
        if((v[i]+v[i+1])%2!=0 and v[i+1]<v[i])
        {
            int a=v[i];
            v[i]=v[i+1];
            v[i+1]=a;
        }
        else{
            continue;
        }
        i++;
    }
     for(int i=0;i<c.size();++i)
    {
        cout<<v[i]<<" ";
    }
    for(int i=0;i<n-1;++i)
    {
        if(v[i]<=v[i+1])
        {d=1;
        
            continue;
        }
        else{d=0;
       
            cout<<"No"<<endl;
            break;
        }
        d=1;
    }
if(d==1)
{
    cout<<"Yes"<<endl;
}
}
return 0;
}