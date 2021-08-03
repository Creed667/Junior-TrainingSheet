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
    string s;
    cin>>s;
    int n= s.length();
    char tmp='a';
    int diff,step=0;
   for(int i=0;i<n;i++){
       diff = abs((s[i]-tmp));
       if(diff>13) step+=26-diff;
       else step+=diff;
      // cout<<step<<NL;
       tmp = s[i];
   }
   cout<<step<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}