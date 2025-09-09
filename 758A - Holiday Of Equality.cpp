
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<int> a(n);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int maxi=a[0];
   for(int i=0;i<n;i++)
   {
       if(a[i]>maxi)
       {
           maxi=a[i];
       }
   }
   for(int i=0;i<n;i++)
   {
       c=c+(maxi-a[i]);
   }
   cout<<c<<endl;
   return 0;
}
