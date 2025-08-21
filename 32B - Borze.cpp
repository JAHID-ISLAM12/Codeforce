
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string p;
    for(size_t i=0;i<s.size();)
    {
        if(s[i]=='.')
        {
            p.push_back('0');
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            p.push_back('1');
            i=i+2;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            p.push_back('2');
            i=i+2;
        }

    }
    cout<<p<<endl;
    return 0;

}
