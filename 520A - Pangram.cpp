#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[100];
    cin>>s;
    //transform(s.begin(),s.end(),s.begin(),::toupper);
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);

    }
    //cout<<s;
    set<char>st;
for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
    }


    //cout<<st.size();
    if(st.size()==26)
    {
     cout<<"YES"<<endl;

    }
    else{cout<<"NO"<<endl;}
    return 0;
}
