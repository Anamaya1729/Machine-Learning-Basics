#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
//cin>>n;
int a[5]={1,2,3,4,5};
/*for(int i=0;i<n;i++)
{ 
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
*/
cout<<endl;
int *ptr=upper_bound(a,a+5,6);
cout<<(*ptr)<<endl;

return 0;
}