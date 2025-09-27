#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::toupper);
        if(s=="YES")
        {
            cout<<"YES"<<endl;
        }
        else {cout<<"NO"<<endl;}
    }

    return 0;
}
