#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    vector<int>c;
    for(int i=1;i<=1666;i++){

        if(i%3!=0 && i%10!=3)
        {
            c.push_back(i);
        }
    }
    while(t--)
    {
        cin>>k;
        k--;
        cout<<c[k]<<endl;
    }


    return 0;
}
