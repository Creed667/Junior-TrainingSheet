#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL endl
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

bool sc(int a,int b) {return a>b;}


void solve(){
  int n,q,x,ind1,ind2;
  map<int,int>m;
  vii v;
  vector<int>::iterator upper,lower;
  cin>>n;
  for(int i=0;i<n;i++){
   cin>>x;
   if(m[x]==0) m[x] = i;
   v.pb(x);
  }
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>x;
      upper = upper_bound(v.begin(),v.end(),x);
      lower = lower_bound(all(v),x);

      ind2 = m[*upper];
      if(m[x]!=0){
      ind1 = m[*lower]-1;
      }
      else ind1 = m[*upper]-1;
    
     if(x==v[0] && x==v[n-1]) cout<<"X X"<<NL;
     else if(x<v[0]) cout<<"X "<<v[0]<<NL;
     else if(x==v[0]) cout<<"X "<<v[m[*upper]]<<NL;
     else if (x>v[n-1]) cout<<v[n-1]<<" X"<<NL;
     else if(x==v[n-1]) cout<<v[ind1]<<" X"<<NL;

     else  cout<<v[ind1]<<" "<<v[ind2]<<NL;
     
  }

}

int main()
{
  fastio;
  solve();
  return Monke;
}