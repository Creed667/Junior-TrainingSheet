#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
const int Monke = 0;
#define all(x) (x).begin(), (x).end()
#define tcase(x)  int x; cin >> x; while(x--)
using LL = long long;
using ull = unsigned long long int;

void solve(){
  int n,cnt=0;
  int f=-1;
  cin>>n;
  
  string s;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s[1]=='0'){
      if(f!=0) {
        cnt++;
        f=0;
      }
    }
    if(s[1]=='1'){
      if(f!=1){
        cnt++;
        f=1;
      }
    }
  }
  cout<<cnt<<NL;
}

int main()
{
  fastio;

  solve();
  return Monke;
}