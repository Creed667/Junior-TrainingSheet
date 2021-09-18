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
  int n,cnt=0;
  cin>>n;
  vii v;
  int x;
  forN(n){
    cin>>x;
    v.pb(x);
  } 
  sort(all(v));
  if(n==1) cout<<0<<NL;
  else if(n==2) cout<<0<<NL;
  else {
  for(int i=1;i<=v.size()-2;i++){
     if(v[i]>v[0]  && v[i]<v[v.size()-1]) cnt++;
  }
  cout<<cnt<<NL;
}
}

int main()
{
   fastio;
   solve();
   return Monke;
}