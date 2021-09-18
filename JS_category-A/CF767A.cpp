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

bool srt(int a, int b){
  return a>b;
}

void solve(){
  int n;
  vii v;
  map<int,int>mp;
  cin>>n;
  int x;
  forN(n){
    cin>>x;
    v.pb(x);
   
  }
  int l = n;
  mp[v[0]]=1;
  forN(n){
    if(v[i]==l){
      mp[v[i]]=1;
     while (mp[l]==1)
     {
       cout<<l;
       l--;
       if(mp[l]!=0) cout<<" ";
     }
     cout<<NL;
    }
    else{
    cout<<NL;
    mp[v[i]]=1;
    }
  }
}



int main()
{
  fastio;
  solve();
  return Monke;
}