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

void solve(){
  int n,k,x,flag=1,cnt=0;
  cin>>n>>k;
  
  forN(n){
    cin>>x;
   flag=1;
   map<int,int>mp;
   while (x!=0)
   {
     int r = x%10;
     mp[r] =1;
    x/=10;
   }

   for(int j=0;j<=k;j++){
     if(mp[j]!=1) flag =0;
   }
   if(flag) cnt++;
  }
  cout<<cnt<<NL;
}

int main()
{
  fastio;
  solve();
  return Monke;
}