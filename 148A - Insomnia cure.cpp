#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,i;
    long long int d;
    cin>>k>>l>>m>>n>>d;
    set<int>st;
    for( i=k;i<=d;i+=k)
    {
        st.insert(i);
    }
    for( i=l;i<=d;i+=l)
    {
        st.insert(i);
    }
    for( i=m;i<=d;i+=m)
    {
        st.insert(i);
    }
    for( i=n;i<=d;i+=n)
    {
        st.insert(i);
    }
    cout<<st.size()<<endl;

    return 0;
}
