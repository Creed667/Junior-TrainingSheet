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
  int mn,t;
  vector<int>a,b,c;
  int n,x;
  cin>>n;
  forN(n){
    cin>>x;
    if(x==1) a.pb(i+1);
    else if(x==2) b.pb(i+1);
    else c.pb(i+1);
  }
  mn = min(min(a.size(),b.size()),c.size());
  cout<<mn<<NL;
  forN(mn){
   cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<NL;
  }

}

int main()
{
  fastio;
  solve();
  return Monke;
}