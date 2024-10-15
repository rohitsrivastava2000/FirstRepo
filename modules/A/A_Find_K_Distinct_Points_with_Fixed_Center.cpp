#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   ll n,m,k;
   cin>>n>>m>>k;

   vector<vector<ll>> v;
   int flag=1;
   for(int i=0;i<k;i++)
   {
       if(k%2==1 && flag==1)
       {
        vector<int> temp;
        temp.push_back(n);
         temp.push_back(m);
        v.push_back(temp);
       }
   }
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