#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define NL "\n"
const int Monke = 0;
#define all(x) (x).begin(), (x).end()
using LL = long long;
using ull = unsigned long long int;

void solve(){
    int a=0,d=0,n;
    char c;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>c;
       if(c=='A') a++;
       else d++;
   }
   if(a==d){
       cout<<"Friendship"<<NL;
   }
   else if (a>d) cout<< "Anton"<<NL;
   else cout<<"Danik"<<NL;
}

int main()
{
    fastio;
    solve();
    return Monke;
}