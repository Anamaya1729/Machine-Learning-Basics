#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
int to_find;
cin>> to_find;
int l,h;
while(h-l>1)
{
    int mid =(h+l)/2;
    if(v[mid]<to_find)
    {
        l=mid+1;
    }
    else{
        h=mid; 
        }
}
if(v[l]==to_find)
{
    cout<<l<<endl;
}
else if(v[h]==to_find)
{
    cout<<h<<endl;
}
else
{
    cout<<"not found";
}
return 0;
}