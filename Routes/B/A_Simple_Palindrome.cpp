#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   ll n;
   cin>>n;

   string str;
   string s={'a','e','i','o','u'};
   for(int i=0;i<n;i++)
   {
      str.push_back(s[i%5]);

   }
   sort(str.begin(),str.end());
   cout<<str<<endl;
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