#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
#define all(x) (x).begin(), (x).end()
#define tc(x)  int x; cin >> x; while(x--)
#define mp make_pair
#define pb push_back
#define forN(x) for(int i=0;i<x;i++)
#define vii vector<int>
#define vLL vector<long long>
using LL = long long;
using ull = unsigned long long int;
const int Monke = 0;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return a.second<b.second;}

bool check_leap(int year){
   if ( ((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)) return true;
   else return false;
}
void solve(){
  int ans=0,cnt=0,n,d[1009],m[1009],y[1009],c[1009];
  while(scanf("%d",&n)==1){
   if(n==0) break;
   for(int i=0;i<n;i++){
      cin>>d[i]>>m[i]>>y[i]>>c[i];
   }

   for(int i=0;i<n-1;i++){

     if((d[i+1]-d[i])==1){
      if(m[i]==m[i+1]){
         if(y[i]==y[i+1]) 
         {
            ans+=(c[i+1]-c[i]);cnt++;
         }
      }
     }

     else if((m[i+1] - m[i])==1){
      if(y[i+1]==y[i])
     {
         if (m[i]%2==0 && m[i]<=7)
         {
         if(m[i]==2){
            if(check_leap(y[i]))
            {
               if(d[i]==29 && d[i+1]==1) {
                  ans+=(c[i+1]-c[i]);cnt++;

               }
            }
            else
            {
               if(d[i]==28 && d[i+1]==1) 
                  {
                     ans+=(c[i+1]-c[i]);cnt++;
                  }
            }
         }
         else 
           {
            if(d[i]==30 && d[i+1]==1) 
               {
                  ans+=(c[i+1]-c[i]);cnt++;
               }
           }
         }
     else if(m[i]%2!=0 && m[i]>7){
       if(d[i]==30 && d[i+1]==1) 
         {
            ans+=(c[i+1]-c[i]);cnt++;
         }
     }

     else if(m[i]%2!=0 && m[i]<=7){
      if(d[i]==31 && d[i+1]==1) 
         {
            ans+=(c[i+1]-c[i]);cnt++;
         }
     }
     else if(m[i]%2==0 && m[i]>7){
      if(d[i]==31 && d[i+1]==1) 
         {
            ans+=(c[i+1]-c[i]);cnt++;
         }
     }
     }
   }

   else if((y[i+1] - y[i])==1){
      if(m[i]==12 && m[i+1]==1){
         if(d[i]==31 && d[i+1]==1) {
             ans+=(c[i+1]-c[i]);cnt++;
         }
      }
   }
}
     cout<<cnt<<" "<<ans<<NL; 
     ans=0;cnt=0;
}
}

int main()
{
   solve();
   return Monke;
}