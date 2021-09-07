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
  int n,t,k,d;
  cin>>n>>t>>k>>d;
  int total_time,cakes;
  (n%k==0) ? cakes = n/k : cakes = (n/k)+1;
   total_time = cakes*t;
  int second_time=0,remain;
  int t1=0,t2=d;
   cakes = (d/t)*k; 
   t1 = (d/t)*t;
  while (cakes<n)
  {
    t1+=t;
    cakes+=k;
    t2+=t;
    cakes+=k;
  }
  second_time = max(t1,t2);

  if(second_time< total_time) cout<<"YES"<<NL;
  else cout<<"NO"<<NL;
  
  // cout<<"sec: "<<second_time<<NL;
  // cout<<total_time<<NL;


}

int main()
{
  fastio;
  solve();
  return Monke;
}