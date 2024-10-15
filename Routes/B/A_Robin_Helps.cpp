#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   ll n,k;
   cin>>n>>k;
   
   ll sum=0;
   ll ct=0;
   int ans=0;
   for(int i=0;i<n;i++)
   {
      int kk;
      cin>>kk;
      
      if(sum!=0 && kk==0)
      {
        ans++;
        sum--;
       // cout<<i<<endl;
      } 

      if(kk>=k)
       sum+=kk;

      

      
   }
   cout<<ans<<endl;
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
        solve();
   }
   return 0;
}