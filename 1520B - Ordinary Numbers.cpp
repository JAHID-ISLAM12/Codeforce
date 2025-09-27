#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,start,count=0;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
            for(int i=1; i<=9; i++)
    	{
    		start=i;
    		while(start<=n)
    		{
    			count++;
    			start=start*10+i;
			}
		}
		cout << count << endl;

    }return 0;
}
