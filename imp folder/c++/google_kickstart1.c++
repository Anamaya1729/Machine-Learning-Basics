#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
int j=0;
while(t>j)
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
for(int i=0;i<n;++i)
{
    int x;
    cin>>x;
    v.push_back(x);
}
int sum = accumulate(v.begin(),v.end(),0);
cout<<"Case #"<<j+1<<":  "<<sum%m<<endl;
j++;
}

return 0;
}