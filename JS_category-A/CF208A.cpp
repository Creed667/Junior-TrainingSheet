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
  string s;
  string w = "WUB";
  int j=0;
  cin>>s;
  int l = s.length();
  for(int i=0;i<l;i++){
    if(s.substr(i,3)=="WUB"){
     for(int k=i+2;k>=i;k--){
        s[k] = '*';
     }
    }
    //else cout<<s[i];
  }
  for(int i=0;i<l;){
    if(s[i]=='*') {
      if(i<l) i++;
      continue;
    }
    else {
    while (s[i]!='*' && i<l)
    {
      cout<<s[i];
      if(i<l) i++;
    }
    cout<<" ";
    }
    
  }
  cout<<NL;
}

int main()
{
  fastio;
  solve();
  return Monke;
}