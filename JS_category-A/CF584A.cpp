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
  int n,t;
  cin>>n>>t;
  if(n==1 && t==10) cout<<-1<<NL;
  else if(t==10){
    cout<<1;
    forN(n-1) cout<<0;
    cout<<NL;
  }
  else {
    forN(n) cout<<t;
    cout<<NL;
  }
}

int main()
{
  fastio;
  solve();
  return Monke;
}