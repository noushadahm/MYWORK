#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        if(n%2==0)
        {
            for(i=1;i<n;i=i+2)
                cout<<i+1<<" "<<i<<" ";
        }
        else
        {
            for(i=1;i<n;i=i+2)
            {
                if(i==n-2)
                    cout<<i+2<<" "<<i<<" "<<i+1;
                else
                    cout<<i+1<<" "<<i<<" ";
            }
        }
cout<<"\n";
    }
}
