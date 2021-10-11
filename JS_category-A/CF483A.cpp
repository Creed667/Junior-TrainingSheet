#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
#define all(x) (x).begin(), (x).end()
#define tc(x)  int x; cin >> x; while(x--)
#define forv(x,v) for(int i=0;i<x;i++) int y; cin>>y; v.push_back(y);
#define mp make_pair
#define pb push_back
#define forn(x) for(int i=0;i<x;i++)
#define vii vector<int>
#define vLL vector<long long>
using LL = long long;
using ull = unsigned long long int;
const int Monke = 0;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return a.second<b.second;}

void solve(){
  LL l,r;
  cin>>l>>r;
  if(l%2==0){
    if((r-l)>=2){
      cout<<l<<" "<<l+1<<" "<<l+2<<NL;
    }
   else cout<<-1<<NL; 
  }
  else {
    if((r-l)>=3){
      cout<<l+1<<" "<<l+2<<" "<<l+3<<NL;
    }
    else cout<<-1<<NL;
  }
}
int main()
{
   fastio;
   solve();
   return Monke;
}