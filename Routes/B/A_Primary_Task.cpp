#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   string str;
   cin>>str;
   int flag=0;
   
   
   for(int i=0;i<=0;i++)
   {
      if(str[i]=='1' && str[i+1]=='0')
      {
          if(i<str.size() && str[i+2]>='2')
            flag=1;

          else {
            if(i+2<str.size()-1 && str[i+2]=='1')
             flag=1;
             
          }  
      }
   }
   if(flag)
    cout<<"YES"<<endl;

   else 
    cout<<"NO"<<endl; 
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