#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
const int Monke = 0;
#define all(x) (x).begin(), (x).end()
#define tc(x)  int x; cin >> x; while(x--)
using LL = long long;
using ull = unsigned long long int;

void solve(){
  LL k,r,i=1,l;
  cin>>k>>r;
  while (1)
  {
    if((k*i)%10==0){
      cout<<i<<NL;
      break;
    } 
      if(((k*i)-r)%10==0){
        cout<<i<<NL;
        break;
      }
      i++;
  }
  
}

int main()
{
  fastio;
  solve();
  return Monke;
}