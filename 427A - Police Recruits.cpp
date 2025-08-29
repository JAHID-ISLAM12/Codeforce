
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=0,c=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            if(p==0){c++;}
            else {p--;}
        }
        else {p+=x;}
    }
    cout<<c<<endl;

    return 0;
}
