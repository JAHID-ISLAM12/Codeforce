#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<long int>n;
   n.push_back(100);
   n.push_back(20);
   n.push_back(10);
   n.push_back(5);
   n.push_back(1);

        long int a;
        cin>>a;
        int count=0;

    for(int i=0;i<n.size();i++)
    {
         count+=a/n[i];
         a=a%n[i];
         //cout<<i<<endl;
    }


    cout<<count<<endl;

    return 0;

}
